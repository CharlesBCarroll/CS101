/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Assignment 2*/
/*This program will let the user enter income and will output the tax due based on income*/
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int income;
    double tax;
    cout << "Enter the income : ";
    cin >> income;
    if(income<=750)
    {
        tax = income * .01;
    }
    else if(income>750&&income<=2250)
    {
        tax = (income * .02) + 7.5;
    }
    else if(income>2250&&income<=3750)
    {
        tax = (income * .03) + 37.5;
    }
    else if(income>3750&&income<=5250)
    {
        tax = (income * .04) + 82.5;
    }
    else if(income>5250)
    {
        tax = (income * .05) + 142.5;
    }
    cout << "The tax due is : "<<tax<<endl;
    return 0;
}