#include <iostream>
using namespace std;

int main() {
    int num,sum;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    sum=0;
    for(int i=1;i<num;i++) {
        if(num%i==0) {
            sum+=i;
        }
    }
    if(sum==num) {
        cout<<num<<" is a perfect number.";
    }
    else {
        cout<<num<<" is not a perfect number.";
    }
    return 0;
}