#include <iostream>
using namespace std;

class Outer {
    private:
        int x=2;
    public:
        int y=3;
        static int count;
        void show() {
            cout<<i.b<<endl;
        }
    class Inner {
        private:
            int a=6;
        public:
            int b=7;
            void display() { 
                // cout<<x<<" "<<y<<endl;
                cout<<count;
            }
    };
    Inner i;
};
int Outer::count=1;

int main() {
        Outer o;
        o.show();
    return 0;
}