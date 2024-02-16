#include <iostream>
using namespace std;

void reversedArray(int nums[5]) {
    int rev[5];
    for(int i=0,j=4;i<5,j>=0;i++,j--) {
        rev[i]=nums[j];
        cout<<rev[i];
    }
}
int main() {
    int nums[]={1,2,3,4,5};
    reversedArray(nums);
    return 0;
}