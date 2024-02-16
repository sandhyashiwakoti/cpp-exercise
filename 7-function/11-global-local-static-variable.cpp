#include <iostream>
using namespace std;

int x=10;
void display() {
    int y=2;
    static int z=3;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    x++;
    y++;
    z++;
}
int main() {
    display();
    display();
    return 0;
}