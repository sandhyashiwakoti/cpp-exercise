#include <iostream>
using namespace std;

int main() {
    int nums[]={1,2,3,4,5};
    int key=6;
    int l=sizeof(nums)/sizeof(nums[0]);
    for(int i=0;i<l;i++) {
        if(key==nums[i]) {
            cout<<key<<" found at index "<<i;
            return 0;
        }
    }
    cout<<key<<" not found.";
    return 0;
}