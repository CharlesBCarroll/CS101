#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    int sum = 0;
    cout << "enter a positive integer: ";
    cin >> num;
    while(num != 0)
    {
        sum += num;
        cout << "next number ";
        cin >> num;
    }
    cout << "The sum of those numbers are "<<sum<<endl;
}