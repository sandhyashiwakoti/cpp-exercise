#include <iostream>
using namespace std;

class Parent {
    public:
        virtual void display()=0;
        void show() {
            cout<<"Parent function!";
        }
};
class Child : public Parent {
    public:
        void display() {
            cout<<"Child function!";
        }
};

int main() {
    Parent *p=new Child();
    p->display();
    cout<<endl;
    return 0;
}