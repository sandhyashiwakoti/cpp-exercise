#include<iostream>
using namespace std;

int main() {
    for(int i=0;i<=2;i++) {
        for(int j=0;j<=2;j++) {
            if(i+j>=2) {
                cout<<"*";
            }
            else 
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}