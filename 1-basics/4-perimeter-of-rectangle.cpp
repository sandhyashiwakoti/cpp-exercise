#include <iostream>
using namespace std;

int main() {
    int length;
    int breadth;
    int perimeter;
    cout<<"Enter length and breadth: \n";
    cin>>length>>breadth;
    perimeter=2*(length+breadth);
    cout<<"Perimeter is "<<perimeter;
    return 0;
}