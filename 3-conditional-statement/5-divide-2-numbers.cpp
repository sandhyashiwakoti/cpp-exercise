#include <iostream>
using namespace std;

typedef float num;
int main() {
    num n1,n2;
    float div;
    cout<<"Enter two numbers: \n";
    cin>>n1>>n2;
    div=float (n1/n2);
    if(n2==0) {
        cout<<"Denominator is 0. Cannot divide by zero.";
    }
    else {
        cout<<"The division is "<<div;
    }
    return 0;
}