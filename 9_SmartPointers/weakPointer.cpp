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
    
    weak_ptr<Fun> weak;
    {
        shared_ptr<Fun> shared = make_shared<Fun>();
        weak=shared;
        cout<<"size: "<<sizeof(weak)<<endl;
        cout<<"Shared count: "<<shared.use_count()<<endl;
        cout<<"Weak pointer expired status: "<<weak.expired()<<endl;
    }
    cout<<"Weak pointer expired status: "<<weak.expired()<<endl;
    
}
