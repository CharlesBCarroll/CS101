#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i = 1;
    double sum = 0;
    while(i < 100)
    {
        sum += i; //sum = sum + i
        i += 2;
    }
    cout << "the sum is "<<sum <<endl;
}