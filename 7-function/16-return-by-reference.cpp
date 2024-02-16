#include <iostream>
using namespace std;

int& display(int &a) {
    return a;
}
int main() {
    int x=10,y=20;
    int z=display(x);
    cout<<z;
    display(x)=24;
    cout<<x;
    return 0;
}
