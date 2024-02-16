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
    Rectangle r;
    Rectangle *ptr=&r;
    r.length=2;
    r.breadth=1;
    ptr->length=3;
    cout<<r.area()<<endl;
    cout<<ptr->area();
    return 0;
}