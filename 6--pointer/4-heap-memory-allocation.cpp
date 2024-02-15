#include <iostream>
using namespace std;

int main() {
    int num[]={1,2,3};
    int *ptr=new int[5];
    ptr[0]=5;
    cout<<ptr[0]<<endl;
    cout<<num[0]<<endl;
    ptr=num;
    delete []ptr;//delete from heap;
    for(int i=0; i<3; i++) {
        cout<<*(ptr+i)<<endl;
    }
    return 0;
}