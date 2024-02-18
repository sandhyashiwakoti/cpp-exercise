#include <iostream>
using namespace std;

template <class T>
class Rectangle {
    public:
        T length;
        T breadth;
        Rectangle(T l,T b) {
            length=l;
            breadth = b;
        }
        T area();
};
template <class T>
T Rectangle<T> :: area() {
    return length*breadth;
}

int main() {
    Rectangle<int> r(2,3);
    cout<<r.area()<<endl;
    Rectangle<float> r1(2.5,3.0);
    cout<<r1.area()<<endl;
    return 0;
}
