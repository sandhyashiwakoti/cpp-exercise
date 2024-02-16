#include <iostream>
using namespace std;

class Rectangle {
        public:
        int length;
        int breadth;
        Rectangle (int l,int b) {
            setlength(l);
            setbreadth(b);
        }
        void setlength (int length) {
            if(length>0) {
                this->length = length;
            }
            else {
                this->length =0;
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
        int area();
        inline int perimeter();
        bool isPositive();
        ~Rectangle();
};
int Rectangle :: area() {
    return length*breadth;
}
int Rectangle :: perimeter() {
    return 2*(length+breadth);
}
bool Rectangle :: isPositive() {
    return length>0 && breadth>0;
}
Rectangle :: ~Rectangle() {
    cout<<"Destroyed.";
}

int main() {
    Rectangle r(2,3);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
if(r.isPositive()) {
    cout<<"Yes";
}
    return 0;
}