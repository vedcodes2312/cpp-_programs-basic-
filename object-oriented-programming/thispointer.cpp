// demonstration of "this" pointer in cpp
#include<iostream>
using namespace std;

class Example {
    private:
     int value;
    
     public:
     void setvalue(int value) {
        this->value = value;
     }
     void display() {
         cout<< "value is: "<< this->value << endl;
     }
};

int main() {
    Example e1;
    e1.setvalue(10);
    e1.display();
    return 0;
}

  



