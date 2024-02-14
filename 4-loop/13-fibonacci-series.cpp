#include <iostream>
using namespace std;

int main() {
    int firstTerm,secondTerm,nextTerm,term;
    cout<<"Enter no.of terms in fibonacci: "<<endl;
    cin>>term;
    firstTerm=0;
    secondTerm=1;
    for(int i=0;i<term;i++) {
        cout<<firstTerm<<endl;
        nextTerm=firstTerm+secondTerm;
        firstTerm=secondTerm;
        secondTerm=nextTerm;
    }
}