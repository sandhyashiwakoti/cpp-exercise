#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The factors of "<<num<<" are: \n";
    for(int i=1;i<=num;i++) {
        if(num%i==0)
            cout<<i<<endl;
    }
    return 0;
}