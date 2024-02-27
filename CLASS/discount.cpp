/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Discount + tax on an item in a store*/
/*This program will let you enter an amount and if it is less than 500 it will give a certain amount of discount and tax*/
#include<iostream>
using namespace std;
int main()
{
    double amount;
    cout << "Enter the amount that is being spent: ";
    cin >> amount;
    if(amount >= 500)
    {
        double a = (amount * .25);
        double b = (amount - a);
        double c = (b * .08);
        double d = (b+c);
        cout << "The amount that you are spending is: " <<d<<endl;
    }
    else
    {
        double e = (amount * .15);
        double f = (amount - e);
        double g = (f * .08);
        double h = (f+g);
        cout << "The amount you are spending is: "<<h<<endl;
    }
}