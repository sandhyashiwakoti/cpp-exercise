#include <iostream>
using namespace std;

int main() {
    char name[]="CIVIC";
    int l=sizeof(name)/sizeof(name[0])-1;
    int flag=0;
    for(int i=0,j=l-1;i<=j;i++,j--) {
        if(name[i]==name[j]) {
            flag=1;
        }
        else {
            flag=0;
            break;
        }
    }
    if(flag==0) {
        cout<<"Not a palindrome.";
    }
    else {
        cout<<"Palindrome.";
    }
}