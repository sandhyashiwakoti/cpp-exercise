#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int x1,x2,y1,y2;
    float distance;
    cout<<"Enter x1 & x2: "<<endl;
    cin>>x1>>x2;
    cout<<"Enter y1 & y2: "<<endl;
    cin>>y1>>y2;
    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout<<"distance is "<<distance;
    return 0;
}