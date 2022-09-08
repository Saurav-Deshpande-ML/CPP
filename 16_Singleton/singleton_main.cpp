#include <iostream>
#include <string>
#include "singleton.hpp"
#include <thread>

using namespace std;

void user1()
{
    Singleton *single1 = Singleton::getSingleInstance();
    single1->setMessage("Message from user 1");
}
void user2()
{
    Singleton *single2 = Singleton::getSingleInstance();
    single2->setMessage("Message from user 2");
}

int main()
{

    // Singleton *single1 = Singleton::getSingleInstance();
    // single1->setMessage("Message from user 1");

    // Singleton *single2 = Singleton::getSingleInstance();
    // single2->setMessage("Message from user 2");
    thread t1(user1);
    thread t2(user2);
    t1.join();
    t2.join();
}
