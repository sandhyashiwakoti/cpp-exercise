#include <iostream>
using namespace std;

class Rectangle {
    public:
        int length;
        int breadth;
        int area() {
            return length*breadth;
        }
};

int main() {
    Rectangle *ptr;
    ptr=new Rectangle;
    ptr->length=2;
    ptr->breadth=2;
    cout<<ptr->area();
    delete []ptr;
    return 0;
}