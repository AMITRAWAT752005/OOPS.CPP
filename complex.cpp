/*Create a class Complex having two int type variable named real & img denoting
real and imaginary part respectively of a complex number. Overload +, - , ==
operator to add, to subtract and to compare two complex numbers being denoted by
the two complex type objects*/
#include <iostream>
using namespace std;

class complex {
private:
    int real;
    int imag;

public:

    complex() {
        real = 0;
        imag = 0;
    }

    
    complex(int real, int imag) {
        this->real = real;
        this->imag = imag;
    }

    complex operator +(complex c) {
        complex c3;
        c3.real = real + c.real;  
        c3.imag = imag + c.imag;
        return c3;
    }

  
    complex operator -(complex c) {
        complex c4;
        c4.real = real - c.real;  
        c4.imag = imag - c.imag;
        return c4;
    }

    
    bool operator == (complex c) {
        return (real == c.real && imag == c.imag);
    }

 
    void display() {
        cout << "Real part: " << real << ", Imaginary part: " << imag << endl;
    }
};

int main() {
    complex c1(6, 5);  
    complex c2(4, 8);  
    cout << "Sum: ";
    complex c3=c1 + c2;
    c3.display();

  
    complex c4 = c1 - c2; 
    cout << "Difference: ";
    c4.display();


    if (c1 == c2)
        cout << "c1 is equal to c2" << endl;
    else
        cout << "c1 is not equal to c2" << endl;

    return 0;
}
