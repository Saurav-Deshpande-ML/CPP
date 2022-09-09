#include <iostream>
#include <thread>
#include <mutex>
#include <deque>
#include <condition_variable>

using namespace std;

mutex mu;
condition_variable condition;
deque<int> buffer;
const unsigned int maxBufferSize = 50;

void producer(int val)
{
    while (val)
    {
        unique_lock<mutex> locker(mu);
        condition.wait(locker, []()
                  { return buffer.size() < maxBufferSize; });
        buffer.push_back(val);
        cout << " Produced : " << val << endl;
        val--;
        locker.unlock();
        condition.notify_one();
    }
}

void consumer()
{
    while (true)
    {
        unique_lock<mutex> locker(mu);
        condition.wait(locker, []()
                  { return buffer.size() > 0; });
        int val = buffer.back();
        buffer.pop_back();
        cout << " Consumed : " << val << endl;
        locker.unlock();
        condition.notify_one();
    }
}

int main()
{

    thread t1(producer, 100);
    thread t2(consumer);
    t1.join();
    t2.join();
    return 0;
}
