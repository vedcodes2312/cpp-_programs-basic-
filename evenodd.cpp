#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    if(n % 2 == 0)
    {
        cout << n << " is even number" << endl;
    }

    else 
    {
        cout << n << " is odd number" << endl;
    }
    return 0;
}