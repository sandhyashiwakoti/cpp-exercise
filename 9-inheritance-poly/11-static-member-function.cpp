#include <iostream>
using namespace std;

class Demo {
    public:
        int x;
        static int count;
        Demo() {
            x=2;
            count++;
        }
        static int myfunc() {
            count++;
            return count;
        }
};
int Demo::count=2;

int main() {
    cout<<Demo::myfunc();
    return 0;
}