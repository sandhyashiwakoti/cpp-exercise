#include <iostream>
using namespace std;

int main() {
    int num2[2][3]={{1,2,3},{4,5,6}};
    int num1[2][3]={{2,2,3},{8,5,6}};
    int num3[2][3];
    for(int i=0;i<2;i++) {
        for(int j=0;j<3;j++) {
            num3[i][j]=num1[i][j]-num2[i][j];
            cout<<num3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}