#include <iostream>
using namespace std;

class Base {
    public:
    Base() {
        cout<<"Base constructor.";
    }
    virtual ~Base() {
        cout<<"Base destructor.";
    }
};
class Derived : public Base {
    public:
        Derived() {
            cout<<"Derived constructor.";
        }
        ~Derived() {
            cout<<"Derived destructor.";
        }
};

int main() {
    Base *ptr=new Derived();
    delete ptr;
    return 0;
}