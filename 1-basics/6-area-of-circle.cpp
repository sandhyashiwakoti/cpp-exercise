#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float radius,area;
    const float pi=3.14;
    cout<<"Enter radius: "<<endl;
    cin>>radius;
    area=pi*radius*radius;
    cout<<"Area of circle is "<<area;
    return 0;
}