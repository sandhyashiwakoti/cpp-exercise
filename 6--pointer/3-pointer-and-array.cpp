#include <iostream>
using namespace std;

int main() {
    int num[]={1,2,3};
    int *x=num;
    int length=sizeof(num)/sizeof(num[0]);
    for(int i=0; i<length; i++) {
        cout<<num[i]<<" ";
        cout<<x[i];
    }
    cout<<endl;
        cout<<num<<endl;
        cout<<&num[0]<<endl;
        cout<<x<<endl;
        cout<<&x<<endl;
        cout<<*num<<endl;
        cout<<*x<<endl;
        cout<<*num+1<<endl;
        cout<<*x+1<<endl;
        cout<<*num+2<<endl;
        cout<<*x+2<<endl;
        cout<<x+1<<endl;
        cout<<&num[1]<<endl;
        cout<<&num[2]<<endl;
        cout<<&num[3]-&num[1];//distance between twopointers.
    return 0;
}