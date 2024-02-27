#include<iostream>
#include<cmath>
using namespace std;
int polynomial(int x)
{
    int a;
    a = 3*pow(x,5)+2*pow(x,4)-5*pow(x,3)-pow(x,2)+7*x -6;
    return a;
}
int main()
{
    int x1 = 5, x2 = 8;
    cout << "When x is 5, the polynomial value is: "<<polynomial(x1)<<endl;
    cout << "When x is 8, the polynomial value is: "<<polynomial(x2)<<endl;
    return 0;
}