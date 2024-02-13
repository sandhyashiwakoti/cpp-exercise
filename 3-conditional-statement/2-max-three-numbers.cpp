#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter three numbers: \n";
    cin>>a>>b>>c;
    if(a>b && a>c) {
        cout<<a<<" is a max number.";
    }
    else if(b>c) {
        cout<<b <<" is a max number.";
    }
    else {
        cout<<c<<" is a max number.";
    }
    return 0;
}