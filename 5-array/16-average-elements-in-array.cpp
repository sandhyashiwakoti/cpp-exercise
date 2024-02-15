#include <iostream>
using namespace std;

int main( ) {
    int nums[100],n,sum=0;
    float average;
    cout<<"Enter numbers of elements: ";
    cin>>n;
    for(int i=0;i<n;i++) {
        cout<<"Enter a number: \n";
        cin>>nums[i];
        sum+=nums[i];
    }
    average=(float )sum/n;
    cout<<"Average is: "<<average;
    return 0;
}