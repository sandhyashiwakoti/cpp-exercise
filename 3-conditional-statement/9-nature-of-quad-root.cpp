#include <iostream>
using namespace std;

int main() {
    int a,b,c,discriminant;
    float root;
    cout<<"Enter a,b,c: ";
    cin>>a>>b>>c;
    discriminant=(b*b)-(4*a*c);
    if (discriminant>0) {
        cout<<"Real and equal.";
    }
    else if(discriminant==0) {
        cout<<"Real and unequal.";
    }
    else if(discriminant<0) {
        cout<<"Imaginary.";
    }
    return 0;
}