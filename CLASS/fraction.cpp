#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double i = 1;
    double i2;
    double sum = 0;
    while(i <= 50)
    {
        sum += i2;
        i += 1;
        i2 = 1/i;
    }
    cout << "the sum is "<< sum + 1 <<endl;
}