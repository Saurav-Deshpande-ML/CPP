#include <iostream>

using namespace std;

template <class T>
class smartInt
{

    

public:
    T *pointer;
    explicit smartInt(T *p = nullptr) { pointer = p; }
    ~smartInt() { delete pointer; }
    T& operator*() { return *pointer; }
};

int main()
{

    // float *p = new float(3.142);
    // smartInt<float> smart = smartInt(p);
    // cout << *smart << endl;
    char *p = new char('c');
    smartInt<char> smart = smartInt(p);
    cout << *smart << endl;
}
