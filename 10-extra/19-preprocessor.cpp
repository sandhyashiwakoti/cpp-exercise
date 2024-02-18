#include <iostream>
using namespace std;

// #define PI 3.1425
#define c cout
#define sqrt(x) x*x
#define MSG(x) #x
#ifndef PI
    #define PI 3.14
#endif

int main() {
    c<<PI<<endl;
    c<<sqrt(2)<<endl;
    c<<MSG(Hello);
    return 0;
}