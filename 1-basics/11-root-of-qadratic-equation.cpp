#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a,b,c;
    int discriminant;
    float r1,r2;
    cout<<"Enter a,b and c: \n";
    cin>>a>>b>>c;
    discriminant=b*b-4*a*c;
    if(discriminant>=0) {
        r1=(-b+sqrt(discriminant))/2*a;
        r2=(-b-sqrt(discriminant))/2*a;
        cout<<r1<<endl<<r2;
    }
    else
        cout<<"NO real roots.discriminant 0";
    return 0;
}