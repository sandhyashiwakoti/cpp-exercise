#include <iostream>
using namespace std;

class Base {
    public:
        int x=10;
        void display() {
            cout<<"Hello world!"<<endl;
        }
};
class Derived : public Base {
    public:
        int x=20;
        void display() {
            cout<<"Hello!"<<endl;
        }
};

int main() {
    Base b;
    cout<<b.x<<" ";
    b.display();
    cout<<endl;
    Derived d;
    cout<<d.x<<" ";
    d.display();
    return 0;
}