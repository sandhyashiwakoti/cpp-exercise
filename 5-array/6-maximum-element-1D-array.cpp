#include <iostream>
using namespace std;

int main() {
    int nums[]={2,6,9,34,86,88,45,23,12};
    int max=0;
    int l=sizeof(nums)/sizeof(nums[0]);
    for(int i=0;i<l;i++) {
        if(nums[i]>max) {
            max=nums[i];
        }
    }
    cout<<max;
    return 0;
}