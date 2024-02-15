#include <iostream>
using namespace std;

int main() {
    int nums[]={1,2,3,4,5,6,7};
    int key,lowest,highest,mid;
    cout<<"Enter key: \n";
    cin >> key;
    int length=sizeof(nums)/sizeof(nums[0]);
    lowest=0;
    highest=length-1;
    while(lowest<=highest) {
        mid=(lowest+highest)/2;
        if(key==nums[mid]) {
            cout<<key<<" found at index "<<mid;
            return 0;
        }
        else if(key>nums[mid]) {
            lowest=mid+1;
        }
        else {
            highest=mid-1;
        }
    }
        cout<<key<<" not found.";
    return 0;
}