#include <iostream>
using namespace std;

int main() {
    int nums[2][3]={{2,3,4},{4,5,27}};
    int l1=sizeof(nums)/sizeof(nums[0]);
    int l2=sizeof(nums[0])/sizeof(nums[0][0]);
    for(int i=0;i<l1;i++) {
        for(int j=0;j<l2;j++) {
            if(nums[i][j]%2!=0) {
                cout<<nums[i][j]<<endl;
            }
        }
    }
    return 0;
}