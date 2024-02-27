/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Lab week 6*/
/*This program will let you enter the amount of hours you work and 
calculate your net pay for the week after overtime, social security tax, federal income,
state income, and union dues*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int hours;
    double pay,newhours,newhours2,SST,FIT,SIT,dues,netpay;
    pay = 16.78;
    dues = 10;
    cout << "Enter the total hours that you worked: ";
    cin >> hours;
    if(hours>40)
    {
        newhours2 = (hours-40)*(pay*1.5); 
        newhours = (40*16.78) + newhours2;
    }
    else
    {
        newhours = (hours * 16.78);
    }
    cout << "Gross pay: $"<<newhours<<endl;
    SST = newhours * .06;
    cout << "Social Security tax: $"<<SST<<endl;
    FIT = newhours * .14;
    cout << "Federal Income tax: $"<<FIT<<endl;
    SIT = newhours * .05;
    cout << "State Income tax: $"<<SIT<<endl;
    cout << "Union dues: $"<<dues<<endl;
    netpay = newhours - SST - FIT - SIT - dues;
    cout << "Net pay: $"<<netpay<<endl;
    return 0;
}