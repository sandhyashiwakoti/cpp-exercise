#include <iostream>
using namespace std;

void display(int &a,int &b) {
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main() {
    int x=10;
    int y=20;
    display(x,y);
    cout<<x<<" "<<y;
    return 0;
}