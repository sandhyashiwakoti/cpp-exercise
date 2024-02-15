#include <iostream>
using namespace std;

int main() {
    char name1[]="SILENT";
    char name2[]="LISTNE";
    int l1=sizeof(name1)/sizeof(name1[0])-1;
    int l2=sizeof(name2)/sizeof(name2[0])-1;
    int flag=0;
    int j;
    for(int i=0; i<l1; i++) {
        for(j=0; j<l2; j++) {
            if(name1[i]==name2[j]) {
                flag=1;
                break;
            }
            else {
                flag=0;
            }
        }
        if(name1[i]!=name2[j]) {
            flag=0;
            break;
        }
    }
    if(flag==0) {
        cout<<"Not anagram!";
    }
    else {
        cout<<"Anagram!";
    }
}