#include <iostream>
using namespace std;

int main() {
    int initialNum, finalNum;
    cout<<"Enter initial and final number: \n";
    cin>>initialNum>>finalNum;
    for(int i=initialNum;i<=finalNum;i++) {
        if(i%3==0 && i%5==0) {
            cout<<i<<" FizzBuzz";
        }
        else if(i%3==0) {
            cout<<i<<" Fizz"<<endl;
        }
        else if(i%5==0) {
            cout<<i<<" Buzz"<<endl;
        }
        else {
            cout<<i<<endl;
        }
    }
}