//c++ program to calculate distance between two coordinates 
//AUTHOR:VED VYAS        GITHUB:vedcodes2312
#include<iostream>
#include<cmath>//for mathematical functions
#include<cstdlib>//standard library
using namespace std;
int main()
{
    system("cls");
   float x1, y1, x2, y2, distance;

    //input cooordinates from user
    cout << "Enter the first coordinate (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the second coordinate (x2 y2): ";
    cin >> x2 >> y2;

    // Calculate the distance, distance formula= √(x2-x1)^2 + (y2-y1)^2
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output: The distance between the two coordinates
    cout << "The distance between (" << x1 << ", " << y1 << ") and (" 
         << x2 << ", " << y2 << ") is " << distance << endl;

    return 0;
}

