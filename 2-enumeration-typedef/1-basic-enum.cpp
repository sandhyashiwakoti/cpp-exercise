#include <iostream>
using namespace std;

enum level {
    LOW=2,
    MEDIUM,
    HIGH
};  

int main() {
    level l=HIGH;
    cout<<l;
    return 0;
}