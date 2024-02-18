#include <iostream>
using namespace std;

class Demo {
    public:
        Demo( ) {
            cout<<"Base";
        }
        ~Demo() {
            cout<<" Destroyed.";
        }
};

int main() {
    Demo *ptr=new Demo();
    delete ptr;
    return 0;
}