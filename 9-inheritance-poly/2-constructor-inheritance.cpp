#include <iostream>
using namespace std;

class Base {
    public:
        int x;
        Base () {
            cout<<"Base non-param";
        }
        Base (int x) {
            cout<<"Base param.";
        }
};
class Derived : public Base {
    public:
        int y;
        Derived () {
            cout<<"Derived non-param";
        }
        +
        Derived (int x,int y): Base(x) {
            cout<<"Base Derived.";
        }
};

int main() {
    Derived d(2,3);
    return 0;
}