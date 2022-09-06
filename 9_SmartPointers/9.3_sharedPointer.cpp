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
    
    shared_ptr<Fun> shared = make_shared<Fun>();
    cout<<"size<< "<<sizeof(shared)<<endl;
    cout<<shared.use_count()<<endl;
    {
        shared_ptr<Fun> shared1 = shared;
        cout<<shared1.use_count()<<endl;
    }
    cout<<shared.use_count()<<endl;
    
}
