#include <iostream>
using namespace std;

int main() {
    int num,fact;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The factorial of "<<num<<" is ";
    fact=1;
    for(int i=num;i>1;i--) {
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}