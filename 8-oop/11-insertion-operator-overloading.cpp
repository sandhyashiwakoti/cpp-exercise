#include <iostream>
using namespace std;

class Complex {
    public:
        int real;
        int imaginary;
    Complex (int real, int imag) {
        this->real = real;
        imag = imaginary;
    }
    friend ostream& operator<<(ostream &o, complex &c) {
        o<<c1.real<<"+i"<<c1.imaginary;
    }
};

int main() {
    Complex c1(2,3);
    Complex c2(3,4);
    cout<<c1;
    cout<<c2;
    return 0;
}