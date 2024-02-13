#include <iostream>
using namespace std;

int main() {
    cout<<"Menu \n";
    cout<<"1.Add \n"<<"2.Subtract \n"<<"3.Divide \n"<<"4.Multiply \n";
    int choice;
    cout<<"Enter your choice number: ";
    cin>>choice;
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    switch(choice) {
        case 1:
            cout<<"Sum is "<<a+b;
            break;
        case 2:
            cout<<"Subtraction is "<<a-b;
            break;
        case 3:
            cout<<"Division is "<<a/b;
            break;
        case 4:
            cout<<"Multiplication is "<<a*b;
            break;
        default:
            cout<<"Invalid choice.";
    }
    return 0;
}