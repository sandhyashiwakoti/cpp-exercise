#include <iostream>
using namespace std;

int sum(int a,int b) {
    return a+b;
}
int max(int a,int b) {
    return (a>b)?a:b;
}
int main() {
    int (*ptr)(int,int);
    ptr=sum;
    cout<<(*ptr)(2,3)<<endl;
    ptr=max;
    cout<<(*ptr)(4,3);
    return 0;
}