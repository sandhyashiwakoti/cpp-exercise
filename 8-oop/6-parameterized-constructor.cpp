#include <iostream>
using namespace std;

class Rectangle {
        int length;
        int breadth;
        public:
        Rectangle (int l,int b) {
            setlength(l);
            setbreadth(b);
        }
        void setlength (int l) {
            if(l>0) {
                length = l;
            }
            else {
                length =0;
            }
        }
        int getlength () {
            return length;
        }
        void setbreadth (int b) {
            if(b>0) {
                breadth = b;
            }
            else {
                breadth =0;
            }
        }
        int getbreadth() {
            return breadth;
        }
        int area() {
            return length*breadth;
        }
        int perimeter() {
            return 2*(length+breadth);
        }
};

int main() {
    Rectangle r(2,3);
    cout<<r.area();
    return 0;
}