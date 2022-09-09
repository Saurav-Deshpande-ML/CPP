#include <iostream>
#include <thread>

using namespace std;

// 1. Function Pointer

void fun(int x)
{
    while (x-- > 0)
    {
        cout << x << endl;
    }
}

int main()
{
    thread t(fun, 10);
    t.join();
}

//****************************************************************

// 2. Lambda Function

// auto fun=[](int x){

//     while (x-- > 0) {
//         cout << x << endl ;
//     }
// };

// int main(){

//     thread t(fun,10);
//     t.join();
// }

//****************************************************************

// 3. Functor

// class Base
// {
// public:
//     void operator()(int x)
//     {
//         while (x-- > 0)
//         {
//             cout << x << endl;
//         }
//     }
// };

// int main()
// {
//     thread t((Base()), 10);
//     t.join();
//     return 0;
// }

//****************************************************************

// 4. Non - static member function

// class Base
// {
// public:
//     void run(int x)
//     {
//         while (x-- > 0)
//         {
//             cout << x << endl;
//         }
//     }
// };

// int main()
// {
//     Base b;
//     thread t(&Base::run, &b, 10);
//     t.join();
//     return 0;
// }

// 5. Static member function

// class Base
// {
// public:
//     static void run(int x)
//     {
//         while (x-- > 0)
//         {
//             cout << x << endl;
//         }
//     }
// };
// int main()
// {
//     std ::thread t(&Base ::run, 10);
//     t.join();
//     return 0;
// }
