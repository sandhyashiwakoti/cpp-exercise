#include <iostream>
using namespace std;

// only even.
int main() {
    int nums[]={0,4,8,6,7,8,126};
    int l=sizeof(nums)/sizeof(nums[0]);
    for(int i=0;i<l;i++) {
        if(nums[i]%2==0) {
            cout<<nums[i]<<endl;
        }
    }
    return 0;
}