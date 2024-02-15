#include <iostream>
using namespace std;

int main() {
    int num[]={1,2,3};
    int length=sizeof(num)/sizeof(num[0]);
    for(int i=0; i<length; i++) {
        cout<<num[i];
    }
        cout<<endl;
        cout<<&num<<endl;
        cout<<num<<endl;
        cout<<&num[0]<<endl;
        cout<<&num[1]<<endl;
        cout<<*num<<endl;
        cout<<*num+1<<endl;
    return 0;
}