/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*discount practice 9/28*/
/*The is program gives money off depending on how much you spend*/
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    double amount,amountafter;
    cout << "Enter the amount that you spent: $";
    cin >> amount;
    if(amount>=100)
    {
        amountafter = amount - 30;
    }
    else if(amount >=75)
    {
        amountafter = amount - 20;
    }
    else if(amount >= 50 )
    {
        amountafter = amount -10;
    }
    else
    {
        amountafter = amount;
        cout << "No discount applies. ";
    }
    cout << "The new price will be "<<amountafter<<endl;
}