#include <iostream>
using namespace std;

class Rectangle {
        int length;
        int breadth;
        public:
        Rectangle () {
            length=2;
            breadth=3;
        }
        int area() {
            return length*breadth;
        }
        int perimeter() {
            return 2*(length+breadth);
        }
};

int main() {
    Rectangle r;
    cout<<r.area();
    return 0;
}