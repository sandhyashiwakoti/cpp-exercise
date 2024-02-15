#include <iostream>
using namespace std;

int main() {
    int nums[2][3]={{2,3,4},{4,5,6}};
    for(int i=0;i<=1;i++) {
        for(int j=0;j<=2;j++) {
            cout<<nums[i][j];
        }
        cout<<endl;
    }
    return 0;
}