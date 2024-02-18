#include <iostream>
using namespace std;

int main() {
    // int const x=10;
    // x++;//can't modify x.
    int x=10;
    int y=10;
    int *const p=&x;
    ++(*p);
    cout<<*p;
    p=&y;
    cout<<*p;
    return 0;
}