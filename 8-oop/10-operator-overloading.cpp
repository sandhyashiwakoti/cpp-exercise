#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imaginary;

    Complex(int real=0, int imaginary=0) {
        this->real = real;
        this->imaginary = imaginary;
    }

    friend Complex operator+(Complex x,Complex y) {
        Complex temp;
        temp.real = y.real + x.real;
        temp.imaginary = y.imaginary + x.imaginary;
        return temp;
    }
};

int main() {
    Complex c1(2,3);
    Complex c2(3,4);
    Complex c3;
    c3=c1+c2;
    cout << c3.real << "+i" << c3.imaginary << endl;
    return 0;
}
