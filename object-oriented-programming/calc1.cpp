#include<iostream>
using namespace std;

class Calc {
    
    private:
    int a, b;
    
    public:
    
    void values(int num1,int num2)
    {
     a = num1;
     b = num2;
    }
     int add()
    {
        return a + b;
    }
    
     int subtract()
    {
        return a - b;
    }
    
     int multiply()
    {
        return a * b;
    }
    
    int divide()
    {
        if(b == 0)
        {
            cout << "division by zero not possible" << endl;
            return 0;
        }
        else 
        {
         return a / b;    
        }
    }
};

int main()
{
  Calc cal;
  int a,b;
  
  cout << "enter first number" << endl;
  cin >> a;
  
  cout << "enter second number" << endl;
  cin >> b;
  
  cal.values(a,b);
  
  cout << "addition: " << cal.add() << endl;
cout << "subtraction: " << cal.subtract() << endl;
cout << "multiplication: " << cal.multiply() << endl;
cout << "division: " << cal.divide() << endl;

  return 0;
}