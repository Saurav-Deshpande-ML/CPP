#include <iostream>
#include <thread>
#include <mutex>

using namespace std;
using namespace std::chrono;

mutex m1;
mutex m2;

void thread1()
{

    m1.lock();
    this_thread::sleep_for(seconds(1));
    m2.lock();
    // lock(m1, m2); // m2 m1
    // this_thread::sleep_for(seconds(1));
    cout << "Thread1 executed" << endl;
    m1.unlock();
    m2.unlock();
}

void thread2()
{

    m2.lock();
    this_thread::sleep_for(seconds(1));
    m1.lock();
    // lock(m2, m1);
    // this_thread::sleep_for(seconds(1));
    cout << "Thread2 executed" << endl;
    m2.unlock();
    m1.unlock();
}

int main()
{
    thread t1(thread1);
    thread t2(thread2);
    t1.join();
    t2.join();
}
