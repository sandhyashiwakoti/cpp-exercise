#include <iostream>
using namespace std;

int main() {
    int initialNum,finalNum;
    cout<<"Enter initial and final numbers: ";
    cin>>initialNum>>finalNum;
    cout<<"The even numbers between "<<initialNum<<" and "<<finalNum<<" are: "<<endl;
    int i;
    for(i=initialNum;i<=finalNum;i++) {
        if(i>0) {
            cout<<i<<"(positive)"<<endl;
        }
        if(i<0) {
            cout<<i<<"(negative)"<<endl;
        }
    }
    return 0;
}