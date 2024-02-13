#include <iostream>
using namespace std;

// daycare age group less than or equal 12 or above 50.
int main() {
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<=12 || age>50) {
        cout<<age<<" is eligible for the daycare group.";
    }
    else {
        cout<<age<<" is not eligible for the daycare group.";
    }
    return 0;
}