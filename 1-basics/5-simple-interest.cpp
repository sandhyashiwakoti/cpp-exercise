#include <iostream>
using namespace std;

int main() {
    int p,t,r;
    float simpleInterest;
    cout<<"Enter principle: "<<endl;
    cin>>p;
    cout<<"Enter time: "<<endl;
    cin>>t;
    cout<<"Enter rate: "<<endl;
    cin>>r;
    simpleInterest=float (p*t*r)/1000;
    cout<<"Simple Interest is "<<simpleInterest;
    return 0;
}