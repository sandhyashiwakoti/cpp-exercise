#include <iostream>
using namespace std;

int max(int x,int y) {
    return (x>y)?x:y;
}

int main() {
    int a=10,b=20;
    cout<<max(a,b);
}