#include <iostream>

using namespace std;

class Shape
{

protected:

    int shape_length;
    int shape_breadth;

public:
    virtual int area() = 0;

    void length(int l)
    {

        shape_length = l;
    }

    void breadth(int b)
    {

        shape_breadth = b;
    }

};

class Rectangle : public Shape
{

public:
    int area()
    {

        return (shape_length * shape_breadth);
    }
};

class Square : public Shape
{

public:
    int area()
    {

        return (shape_length * shape_length);
    }
};

int main()
{

    Rectangle R;
    Square S;

    R.length(10);
    R.breadth(5);

    S.length(10);

    cout << "Area of Rectangle : " << R.area() << endl;
    cout << "Area of Square : " << S.area() << endl;
    return 0;
}
