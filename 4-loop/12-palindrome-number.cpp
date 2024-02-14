#include <iostream>
using namespace std;

int main() {
    int num,r,rev=0;
    cout<<"Enter number: "<<endl;
    cin >>num;
    for(int i=num;i>0;i=i/10) {
        r=i%10;
        rev=rev*10+r;
    }
    if(rev==num) {
        cout<<num<<" is a palindrome.";
    }
    else {
        cout<<num<<" is not a palindrome.";
    }
    return 0;
}