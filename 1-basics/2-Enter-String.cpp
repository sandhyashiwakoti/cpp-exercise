#include <iostream>
using namespace std;

int main() {
    string name;
    string address;
    cout<<"Enter your name and address: \n";
    getline(cin,name);
    cin>>address;
    cout<<"Welcome "<<name<<endl<<"Your address is "<<address;
    return 0;
}