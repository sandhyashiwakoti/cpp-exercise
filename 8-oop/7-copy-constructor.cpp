#include <iostream>
using namespace std;

class Rectangle {
        public:
        int length;
        int breadth;
        Rectangle (int l,int b) {
            length=l;
            breadth=b;
        }
        Rectangle (Rectangle &x) {
            length=x.length;
            breadth=x.breadth;
        }
};

int main() {
    Rectangle r(2,3);
    Rectangle c(r);
    cout<<c.length;
    cout<<c.breadth;
    return 0;
}