#include <iostream>
#include <string>

using namespace std;

class Complex
{

    int real;
    int imag;

public:
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    friend Complex addComplex(Complex, Complex);
    void displayComplex(void);
};

void Complex ::displayComplex(void)
{

    cout << "Complex number: " << real << " + " << imag << "i" << endl;
}

Complex addComplex(Complex comp1, Complex comp2)
{

    Complex comp3((comp1.real + comp2.real), (comp1.imag + comp2.imag));
    return comp3;
}

int main()
{

    Complex c1(1, 2);
    Complex c2(3, 4);
    c1.displayComplex();
    c2.displayComplex();
    cout << "-----------------------" << endl;
    Complex c3 = addComplex(c1, c2);
    c3.displayComplex();
}
