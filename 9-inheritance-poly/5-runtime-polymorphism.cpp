#include <iostream>
using namespace std;

class Car {
    public:
    virtual void start()=0;
};
class Suzuki : public Car {
    public:
        void start() {
            cout<<"Suzuki started"<<endl;
        }
};
class BMW : public Car {
    public:
        void start() {
            cout<<"BMW started"<<endl;
        }
};

int main() {
    Suzuki s;
    s.start();
    BMW b;
    b.start();
    return 0;
}