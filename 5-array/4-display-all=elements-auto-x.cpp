#include <iostream>
using namespace std;

int main() {
    int nums[2][2]={{1,2},{3,4}};
    for(auto &x:nums) {
        for(auto &y:x) {
            cout<<y<<endl;
        }
    }
    return 0;
}