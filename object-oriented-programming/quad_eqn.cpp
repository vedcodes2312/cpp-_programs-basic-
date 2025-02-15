// on the way of learning object oriented programming in c++
#include<iostream>   //header file for input output stream
#include<cmath> //header file for mathematical functions
//  #include<math.h> can also be used instead
#include<cstdlib> //header file for standard library functions
// #include<stdlib.h> can also be used instead
using namespace std;

class QuadraticEqn {
    private: 
    double a, b, c;

    public:
    /* QuadraticEqn(double a, double b, double c) {
        this->a = a;
        this->b = b;      // represent coefficients like Ax^2 + Bx + C = 0
        this->c = c;
    }    */

   /* QuadraticEqn(double A, double B, double C) {
        a = A;
        b = B;
        c = C;
    }       */       //CONSTRUCTOR

    void set_coefficients(double A, double B, double C) {
        a = A;
        b = B;       //coefficient of variable and constant term
        c = C;
    }

    void display_equation() {
        cout << "the quadratic equation is :";
        cout << a << "x^2 ";\
        if(b >= 0)  cout << " + " << b << " x " ;
        else cout << " - " << -b << " x ";                   //display the entire equation
        if (c >= 0) cout << "+ " << c << " = 0" << endl;
        else cout << "- " << -c << " = 0" << endl;
    }
void find_roots() {  //user defined function to find roots of quadratic equation
    if(a == 0) {
        cout << "this is not a quadratic equation, a != 0" << endl;
        return;
    }
  int discriminant = pow(b,2) - (4 * a * c);   //discriminant = b^2 - 4ac
  // we can also use int discriminant = (b*b) - (4*a*c) instead of pow function;
   if(discriminant > 0) {
    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    double root2 = (-b - sqrt(discriminant)) / (2 * a);
    cout << "the roots are real and distinct" << endl;
    cout << "root1 = " << root1 << " and root2 = " << root2 << endl;
   }
   else if(discriminant == 0) {
       double root = -b / (2 * a);
       cout << "the roots are real and equal" << endl;
       cout << "root1 = root2 = " << root << endl;
   }
   else {
       double real_part = -b / (2 * a);
       double imaginary_part = sqrt(-discriminant) / (2 * a);
       cout << "the roots are complex and imaginary" << endl;
       cout << "root1 = " << real_part << " + " << imaginary_part << "i" << endl;
        cout << "root2 = " << real_part << " - " << imaginary_part << "i" << endl;
   }
 }
};

int main() {  //heart of the code - execution starts from here
    system("cls"); //clear the screen
    double a,b,c;
    cout <<"general form of quadratic equation is Ax^2 + Bx + C = 0" << endl;
    cout << "enter the coefficients of the quadratic equation" << endl;
    cin >> a >> b >> c;
    QuadraticEqn q; //object of class QuadraticEqn
    q.set_coefficients(a,b,c);
    q.display_equation();
    q.find_roots();
    return 0; //end of code
}