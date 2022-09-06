//own wrapper function.

#include <iostream>
#include <memory>

using namespace std;

class Fun
{

public:
    Fun() { cout << "Constructor invoked" << endl; }
    ~Fun() { cout << "Destructor invoked" << endl; }
};

int main()
{

    // unique_ptr<int> unique = make_unique<int>(10);
    // cout<<unique.get()<<endl;
    // unique_ptr<int> unique1 = move(unique);
    // cout<<unique1.get()<<endl;
    {
        unique_ptr<Fun> unique2 = make_unique<Fun>();
        cout<<unique2.get()<<endl;
        cout<<"size<< "<<sizeof(unique2)<<endl;
    }
    
    cout << "Unique pointer expired" << endl;
}
