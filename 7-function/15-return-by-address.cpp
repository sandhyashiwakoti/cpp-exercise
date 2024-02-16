#include <iostream>
using namespace std;


int* display(int size) {
    int *ptr=new int[size];
    for(int i=0; i<size; i++) {
        ptr[i]=i+1;
    }
    return ptr;
}
int main() {
    int *p=display(5);
    cout<<p;
    delete []p;
}