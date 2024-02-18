#include <iostream>
using namespace std;

namespace First {
    void fun() {
        cout<<"First.";
    }
}
namespace Second {
    void fun() {
    cout<<"Second.";
    }
}
using namespace First;
int main() {
    fun();    
    cout<<endl;
    Second::fun();
    return 0;
}