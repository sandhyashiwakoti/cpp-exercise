#include <iostream>
using namespace std;

int main() {
    int nums[]={1,2,3,4};
    int sum=0;
    for(int i=0;i<4;i++) {
        sum=sum+nums[i];
    }
    cout<<sum;
    return 0;
}