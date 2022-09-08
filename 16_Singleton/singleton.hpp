#include <iostream>
#include <string>
#include <mutex>

using namespace std;

class Singleton
{

    static int counter;
    static Singleton *instance;
    static mutex mtx;
    Singleton();
    Singleton(const Singleton &);
    Singleton operator=(const Singleton &);

public:
    static Singleton *getSingleInstance();
    void setMessage(string);
};
