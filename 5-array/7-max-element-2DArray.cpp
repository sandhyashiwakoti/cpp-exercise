#include <iostream>
using namespace std;

int main() {
    int nums[2][3]={{2,3,8},{4,5,6}};
    int l1=sizeof(nums)/sizeof(nums[0]);
    int l2=sizeof(nums[0])/sizeof(nums[0][0]);
    int max=0;
    for(int i=0;i<l1;i++) {
        for(int j=0;j<l2;j++) {
            if(nums[i][j]>max)
                max=nums[i][j];
        }
    }
    cout<<max;
    return 0;
}