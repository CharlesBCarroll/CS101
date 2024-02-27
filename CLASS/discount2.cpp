/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Discount + tax on an item in a store*/
/*This program will let you enter an amount and if it is less than 500 it will give a certain amount of discount and tax*/
#include<iostream>
using namespace std;
int main()
{
    double amount, discount, finalamount, finalamount2, finalamount3;
    cout << "Enter the amount that is being spent: ";
    cin >> amount;
    if(amount >= 500)
    {
        discount=0.25;
    }
    else
    {
        discount=0.15;
    }
    finalamount = (amount * discount);
    finalamount3 = (amount - finalamount);
    finalamount2 = (finalamount * .08) + finalamount;
    cout << "The amount after discount and tax would be: "<<finalamount2<<endl;
    return 0;
}