#include <iostream>
using namespace std;

class Rectangle {
        public:
        int size;
        int *ptr;
        Rectangle (int size) {
            this->size = size;
            ptr=new int [size];
        }
        Rectangle (Rectangle &x) {
            size=x.size;
            ptr=new int [size];
        }
};

int main() {
    Rectangle r(5);
    Rectangle obj(r);
    cout<<r.size;
    cout<<obj.size;
    cout<<r.ptr<<endl;
    cout<<obj.ptr;
    return 0;
}