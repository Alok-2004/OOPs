// Compile time polymorphism

#include<iostream>
#include<string>
using namespace std;

class complexNo
{
public:
    int imaginary;
    int real;

    // Function to add two complex numbers using a separate object
    complexNo add(complexNo& a1)
    {
        complexNo a3;
        a3.real = real + a1.real;
        a3.imaginary = imaginary + a1.imaginary;
        return a3;
    }

    // Overloaded + operator for adding complex numbers
    complexNo operator +(complexNo &c1)
    {
        complexNo result;
        result.real = real + c1.real;
        result.imaginary = imaginary + c1.imaginary;
        return result;
    }
};

int main()
{
    complexNo a1, a2;
    a1.imaginary = 10;
    a1.real = 5;

    a2.imaginary = 20;
    a2.real = 15;

    // Adding complex numbers using the overloaded + operator
    complexNo a3 = a1 + a2;

    cout << "Real part of a3: " << a3.real << endl;
    cout << "Imaginary part of a3: " << a3.imaginary << endl;

    return 0;
}

// classnames operater + (
