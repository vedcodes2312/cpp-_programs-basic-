#include <iostream>
#include<cmath>
using namespace std;

int main() {
    // Variables for input
    float a, b;

    //input from user
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    // Calculating the results
    float sum = a + b;
    float difference = a - b;
    float product = a * b;
    float quotient = a / b;
    float remainder = fmod(a, b); // Using fmod for floating point remainder

    // Displaying the results
    cout << "The sum of a = " << a << " and b = " << b << " is " << sum << endl;
    cout << a << " + " << b << " = " << sum << endl;
    
    cout << "The difference of a = " << a << " and b = " << b << " is " << difference << endl;
    cout << a << " - " << b << " = " << difference << endl;
    
    cout << "The product of a = " << a << " and b = " << b << " is " << product << endl;
    cout << a << " * " << b << " = " << product << endl;
    
    cout << "The quotient of a = " << a << " and b = " << b << " is " << quotient << endl;
    cout << a << " / " << b << " = " << quotient << endl;
    
    cout << "The remainder of a = " << a << " and b = " << b << " is " << remainder << endl;
    cout << a << " % " << b << " = " << remainder << endl;

    return 0;
}
