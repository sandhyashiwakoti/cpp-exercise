#include <iostream>
using namespace std;

int main() {
    int num,i,r,rev;
    cout << "Enter number: \n";
    cin >> num;
    i=num;
    rev=0;
    while(i>0) {
        r=i%10;
        rev=rev*10+r;
        i=i/10;
    }
    cout<<"Reverse number: "<<rev;
    return 0;
}