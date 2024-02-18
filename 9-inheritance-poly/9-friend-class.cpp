#include <iostream>
using namespace std;

class Test;
class Demo {
    private:
        int x=2;
        friend Test;
};
class Test {
    public:
        Demo d;
        void display() {
            cout<<d.x;
        }
};

int main() {
    Test t;
    t.display();
    return 0;
}