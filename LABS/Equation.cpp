#include<iostream>
using namespace std;
int main()
{
    cout << "Please enter the value of X to solve the equation 4x^2+5x-8 : ";
    double x;
    cin >> x;
    double solution = x*x * 4 + 5*x -8;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The answer to the equation with that value of x would be " <<solution<<endl;
    return 0;
}