#include <iostream>
using namespace std;

int division(int x, int y) {
    if(y==0) {
        throw 101;
    }
    return x/y;
}
int main() {
    int a=2,b=0,c;
    try{
        c=division(a,b);
        cout<<c;
    }
    catch(int e) {
        cout<<"Error: Denominator 0."<<e;
    }
    return 0;
}