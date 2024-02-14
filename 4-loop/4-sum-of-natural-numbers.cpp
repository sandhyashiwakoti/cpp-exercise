#include <iostream>
using namespace std;

int main() {
    int initialNum,finalNum,sum;
    cout<<"Enter initial and final numbers: ";
    cin>>initialNum>>finalNum;
    cout<<"The sum of natural numbers between "<<initialNum<<" and "<<finalNum<<" are: "<<endl;
    sum=0;
    for(int i=initialNum; i<=finalNum;i++) {
        sum+=i;
    }
    cout<<sum;
    return 0;
}