#include<iostream>
using namespace std;

class temp
{
    int a;
    int b;
    public:
    int solve(int input)
    {
        a = input;
        b=a/2;
        return b;
    }
};

int main()
{
    int num;
    cin>>num;
    temp half;
    int answer=half.solve(num);
    cout<<answer<<endl;
    return 0;
}
