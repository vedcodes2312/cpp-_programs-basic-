#include<iostream>
using namespace std;

class Superhero {
    private:
    string name;
    string power;
    int strengthlvl;

    public:
    Superhero() : name("Captain code"), power("debugging"), strengthlvl(10) { } ; //default constructor
    Superhero(string n, string p, int s) : name(n), power(p), strengthlvl(s) {}; //parameterized constructor
    Superhero(const Superhero& copy) : name(copy.name), power(copy.power), strengthlvl(copy.strengthlvl) {}; //copy constructor
    void displaydetails() {
        cout << "name of superhero: " << name << endl;
        cout << "power of superhero: " << power << endl;
        cout << "strength level of superhero" << strengthlvl << endl;
    }
};

int main() 
{
    Superhero s1; //default constructor
    Superhero s2("Iron Man", "Flying", 20); //parameterized constructor
    Superhero s3(s2); //copy constructor
    s1.displaydetails();
    s2.displaydetails();
    s3.displaydetails();
    return 0;
}