#include <iostream>
using namespace std;

int main() {
    float radius,height,volume;
    const float pi=3.14;
    cout<<"Enter radius: "<<endl;
    cin>>radius;
    cout<<"Enter height: "<<endl;
    cin>>height;
    volume=pi*radius*radius*height;
    cout<<"volume of cylinder is "<<volume;
    return 0;
}