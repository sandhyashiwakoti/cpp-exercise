#include <iostream>
using namespace std;

    typedef int marks;
    typedef int rollno;
int main() {
    marks m1,m2;
    rollno r1;
    cout<<"Enter marks in Science and Maths: \n";
    cin>>m1>>m2;
    cout<<"Enter rollno: \n";
    cin>>r1;
    cout<<"Your marks are "<<m1<<" "<<m2<<". Your roll is "<<r1;
}