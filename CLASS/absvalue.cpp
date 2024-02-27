/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Value to absolute value*/
/*This program will let the user enter a value and it will turn the value into its absolute value form*/
#include<iostream>
using namespace std;
int main()
{
    int value1;
    cout << "Enter a value to be turned into its absolute value\n";
    cout << "Value: ";
    cin >> value1;
    if(value1 < 0)
    {
        value1 = value1 * (-1);
    }
    cout <<"The absolute value is "<<value1<<endl;
    return 0;
}