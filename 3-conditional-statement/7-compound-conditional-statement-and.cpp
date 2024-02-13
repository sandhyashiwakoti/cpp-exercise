#include <iostream>
using namespace std;

// Working hour 9 to 18;
int main() {
    int hour;
    cout<<"Enter hour: ";
    cin>>hour;
    if(hour>=9 && hour<=18) {
        cout<<hour<<" is a working hour.";
    }
    else {
        cout<<hour<< " is not a working hour.";
    }
    return 0;
}