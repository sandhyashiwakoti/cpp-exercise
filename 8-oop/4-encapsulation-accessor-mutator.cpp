#include <iostream>
using namespace std;

class Rectangle {
        int length;
        int breadth;
        public:
        int area() {
            return length*breadth;
        }
        int perimeter() {
            return 2*(length+breadth);
        }
        void setlength(int l) {
            if(l>0) {
                length=l;
            }
            else {
                length=0;
            }
        }
        int getlength() {
            return length;
        }
        void setbreadth(int b) {
            breadth=b;
        }
        int getbreadth() {
            return breadth;
        }

};

int main() {
    Rectangle r;
    r.setlength(4);
    r.setbreadth(-2);
    cout<<r.area();
    return 0;
}