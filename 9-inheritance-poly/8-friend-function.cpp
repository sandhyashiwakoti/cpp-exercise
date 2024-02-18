#include <iostream>
using namespace std;

class Base {
    private:
        int x;
    protected:
        int y;
    public:
        int z;
    friend void fun();
};
void fun() {
    Base b;
    b.x=2;
    b.y=3;
    b.z=4;
    cout<<b.x<<" "<<b.y<<" "<<b.z<<endl;
    }
int main() {
    fun();
    return 0;
}