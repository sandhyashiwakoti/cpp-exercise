#include <iostream>
using namespace std;

int main() {
    int n;
    int terms;
    cout<<"Enter a number: "<<endl;
    cin >> n;
    cout<<"Enter no. of multiplication terms: "<<endl;
    cin >> terms;
    for(int i=1;i<=terms;i++) {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}