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
    Base *p=new Derived();
    p->display();
    return 0;
}