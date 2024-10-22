#include<iostream>
#include<cmath>//for math functions
using namespace std;
int main()
{
    float radius;
    cout <<  "Enter the radius of the circle: ";
    cin  >> radius;
    float area = M_PI *  pow(radius, 2);
    float circumference = 2 * M_PI * radius;
    cout <<"the area of circle with radius "<<radius<<" is "<<area<<endl;
     cout <<"the circumference of circle with radius "<<radius<<" is "<<circumference;

return 0;

}
