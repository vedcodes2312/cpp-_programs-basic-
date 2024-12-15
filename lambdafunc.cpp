// lambda function in  c++

#include<iostream>
using namespace std;
int main()
{
    // lambda function to add to numbers
    auto add = [](int a, int b)
    {
      return a+b;
    };          //semicolon important

    //input from user
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    //calling lambda function
    //without third variable
    cout<<"Sum of two numbers is: "<<add(num1, num2)<<endl;
    //with third variable
    int result = add(num1, num2);
    cout<<"Sum of two numbers is: "<<result<<endl;
    return 0;
    
}