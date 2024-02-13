#include <iostream>
using namespace std;

typedef int marks;
int main() {
    marks m1,m2,m3;
    int average;
    cout<<"Enter marks of science,maths and bio: \n";
    cin>>m1>>m2>>m3;
    average=(m1+m2+m3)/3;
    if(average>=60) {
        cout<<"Grade A";
    } 
    else if(average<60 && average>=30) {
        cout<<"Grade B";
    }
    else {
        cout<<"Grade C";
    }
    return 0;
}