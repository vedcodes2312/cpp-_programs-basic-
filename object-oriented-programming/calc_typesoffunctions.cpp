#include<iostream>   //header file
using namespace std;

class Calculator {    //class
    public:   //access specifier
//definition - user defined functions
   //with argument with return type
   int add(int a, int b) {
    return (a+b);
   }

 //with argument without return type
 void subtract(int a, int b) {
    cout <<  "subtraction : " << a - b << endl;
 }
//without argument with return type
 int multiply() { 
    int a,b;
    cout <<  "enter two numbers " << endl;
    cin >> a >> b;
    return (a*b);
 }

 //without argument without return type
void divide() {
    int a,b;
    cout << "enter two numbers" << endl;
    cin >> a >> b;

    if(b == 0)
    {
        cout << "error : division by zero not possible" << endl;
    }
    else
    {
        cout << "division : " << a / b << endl;
    }
 }
};  

int main()
{
    int a, b;
    cout << "enter two numbers" << endl;
    cin >> a >> b;
    Calculator calc;  //object of class

    //function calls in main function
    int ADD = calc.add(a,b);
    cout << "addition : " << ADD << endl;
    cout << "addition : " << calc.add(a,b) << endl;
     calc.subtract(a,b);
   int PRODUCT = calc.multiply();
    cout << "multiplication : " << PRODUCT << endl;
    cout << "multiplication : " << calc.multiply() << endl;
    calc.divide();
    return 0; //end of code
}
    




