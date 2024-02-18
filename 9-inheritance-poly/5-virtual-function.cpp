#include <iostream>
using namespace std;

class Base {
    public:
        virtual void display() {
            cout<<"Hello world!"<<endl;
        }
};
class Derived : public Base {
    public:
        void display() {
            cout<<"Hello!"<<endl;
        }
};

int main() {
    Base *ptr=new Derived();
    ptr->display();
    return 0;
}