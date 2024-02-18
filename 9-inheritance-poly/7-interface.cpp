#include <iostream>
using namespace std;

class Car {
    public:
        virtual void start()=0;
        virtual void stop()=0;
};
class Suzuki: public Car{
    public:
        void start() {
            cout<<"Suzuki started"<<endl;
        }
        void stop() {
            cout<<"Suzuki stopped"<<endl;
        }
};
int main() {
    Car *p=new Suzuki();
    p->start();
    p->stop();
    return 0;
}