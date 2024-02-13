#include <iostream>
using namespace std;

int main() {
    int u,v,a;
    float speed;
    cout<<"Enter initial speed: "<<endl;
    cin>>u;
    cout<<"Enter final speed: "<<endl;
    cin>>v;
    cout<<"Enter acceleration: "<<endl;
    cin>>a;
    speed= float (v*v-u*u)/2*a;
    cout<<"speed is "<<speed;
    return 0;
}