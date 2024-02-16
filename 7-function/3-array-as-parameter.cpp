#include <iostream>
using namespace std;

void displayArray(int nums[5]);


int main() {
    int nums[]={1,2,3,4,5};
    displayArray(nums);
}

void displayArray(int nums[5]) {
    for(int i = 0; i < 5;i++) {
        cout<<nums[i];
    }
}