#include <iostream>
using namespace std;

template <class T,class R>
R maxm(T x,R y) {
    return (x>y)?x:y;
}

int main() {
    float a=maxm(2,3);
    cout<<a;
    return 0;
}