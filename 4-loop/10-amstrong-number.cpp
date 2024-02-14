#include <iostream>
using namespace std;

int main() {
    int num,i,sum,r;
    cout<<"Enter number: "<<endl;
    cin >> num;
    sum=0;
    i=num;
    while(i>0) {
        r=i%10;
        sum+=(r*r*r);
        i=i/10;
    }
    cout<<sum;
    if(sum==num) {
        cout<<num<<" is an amstrong number.";
    }
    else {
        cout<<num<<" is not an amstrong number.";
    }
    return 0;
}