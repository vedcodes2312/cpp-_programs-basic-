#include<iostream>
#include<string>
using namespace std;

class Person
{
    public:
    string name;
    int age;
    
    void introduce()
    {
        cout << "HI MY NAME IS " <<name<<" AND I AM "<<age<<" YEARS OLD"<<endl;
    }
    
};  //semicolon is imp

int main()
{
    Person per1;
    per1.name = "VEDCODES2312";
    per1.age=18;
    per1.introduce();
    return 0; //end of code
}
