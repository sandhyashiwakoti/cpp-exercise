#include <iostream>
using namespace std;

class Base {
    public:
        int x;
        void display() { 
            cout<<"Hello!";
        }
};
class Derived : public Base {
    public:
        int y;
        void show() {
            cout<<"Bye";
        }
};

int main() {
    Base b;
    b.x=2;
    cout<<b.x;
    Derived d;
    d.x=10;
    cout<<d.x;
    cout<<b.x;
    return 0;
}