#include <iostream>
using namespace std;

class Demo {
    private:
        int x;
    public:
        static int count;
        Demo () {
            x=10;
            count++;
        }
};
int Demo::count=2;
int main() {
    // Demo d;
    // cout<<d.count<<endl;
    // Demo d1;
    // cout<<d1.count<<endl;
    cout<<Demo::count;
    return 0;
}