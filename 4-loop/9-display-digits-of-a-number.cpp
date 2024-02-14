#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    for(int i=num;i>0;i=i/10) {
        cout<<i%10;
    }
    return 0;
}