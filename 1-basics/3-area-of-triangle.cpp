#include <iostream>
using namespace std;

int main() {
    int breadth;
    int height;
    float area;
    cout<<"Enter breadth and height: \n";
    cin>>breadth>>height;
    area=float (breadth*height)/2;
    cout<<"The area is: "<<area;
    return 0;
}