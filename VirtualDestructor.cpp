#include <iostream>

using namespace std;

class Base
{

public:
    Base() { cout << "Base class constructor." << endl; }
    virtual ~Base() { cout << "Base class Destructor." << endl; }
    virtual void fun() { cout << "method fun() of base class" << endl; }
};

class Derived : public Base
{

public:
    Derived() { cout << "Derived class constructor." << endl; }
    ~Derived() { cout << "Derived class Destructor." << endl; }
    void fun() { cout << "method fun() of derived class" << endl; }
};

int main()
{

    Base *b1 = new Base();
    Base *b2 = new Derived();

    b1->fun();
    b2->fun();

    delete b1;
    delete b2;
}
