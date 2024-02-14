#include <iostream>
using namespace std;

int main() {
    int initialNum,finalNum;
    cout<<"Enter initial and final numbers: ";
    cin>>initialNum>>finalNum;
    cout<<"The even numbers between "<<initialNum<<" and "<<finalNum<<" are: "<<endl;
    int i;
    for(i=initialNum;i<=finalNum;i++) {
        if(i%2==0) {
            cout<<i<<endl;
        }
    }
    return 0;
}