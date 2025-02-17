#include <iostream>
using namespace std;

class Complex;

class Complex
{
private:
    float real, imag;

public:
    Complex(float r, float i)
    {
        real = r; 
        imag = i; 
    }

    friend Complex addComplex(Complex, Complex);
    
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex addComplex(Complex c1, Complex c2)
{
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main()
{
    Complex c1(2.7, 1.4);
    Complex c2(3.6, 3.8);
    
    Complex sum = addComplex(c1, c2);

    cout << "Sum of complex numbers: ";
    sum.display();

    return 0;
}
