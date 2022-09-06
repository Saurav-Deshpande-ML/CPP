#include <iostream>

using namespace std;

class smartInt
{

    int *pointer;

public:
    explicit smartInt(int *p = nullptr) { pointer = p; }
    ~smartInt() { delete pointer; }
    int& operator*() { return *pointer; }
};

int main()
{

    int *p = new int(25);
    smartInt smart = smartInt(p);
    cout << *smart << endl;
}
