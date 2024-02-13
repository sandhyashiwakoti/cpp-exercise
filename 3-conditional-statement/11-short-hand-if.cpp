#include <iostream>
using namespace std;

int main() {
    int a=2;
    int b=4;
    int c=6;
    cout<<"Max number is: ";
    (a>b && a>c) ? cout<<a:(b>c) ? cout<<b:cout<<c;
    cout<<endl<<"Min number is: ";
    (a<b && a<c) ? cout<<a:(b<c) ? cout<<b : cout<<c;
    return 0;
}