#include <iostream>
using namespace std;

int main() {
    int nums[2][2]={{2,3},{4,5}};
        int sum=0;
        int l1=sizeof(nums)/sizeof(nums[0]);
        int l2=sizeof(nums[0])/sizeof(nums[0][0]);
    for(int i=0;i<l1;i++) {
        for(int j=0;j<l2;j++) {
            sum=sum+nums[i][j];
        }
    }
    cout<<sum;
    return 0;
}