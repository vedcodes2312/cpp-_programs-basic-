//types of constructors - default constructor, parameterized constructor, copy constructor
#include<iostream>
using namespace std;

class Student {
    private:
    string name;
    int age;
    public:
    Student() { // default constructor
        name = "Unknown";
        age = 0;
    }
    Student(string n,int a) {  //parameterized constructor
        name = n;
        age = a;
    }

    void printdetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1; // default constructor
    s1.printdetails();
    Student s2("Ved", 18);
     // parameterized constructor
     s2.printdetails();
     return 0;
}