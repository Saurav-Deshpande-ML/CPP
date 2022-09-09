#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

int counter = 0;
mutex mtx;

void increaseCounter()
{
    int i = 0;
    mtx.lock();
    // mtx.try_lock();
    while (i++ < 100000)
    {
        ++counter;
    }
    mtx.unlock();
}

int main()
{

    thread t1(increaseCounter);
    thread t2(increaseCounter);
    t1.join();
    t2.join();
    cout << "Count: " << counter << endl;
}
