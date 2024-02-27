/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Lab week 10*/
/*This program lets user enter x and gives e^x*/
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
int main()
{
    long double sum = 1;
    long double pro = 1;
    int x;
    cout << "Please enter the value for x: ";
    cin >> x;
    for(int i=1;i<=100;i++)
    {
        long double pro = 1;
        for(int j=1;j<=i;j++)
        {
            pro *= j;
        }
        sum +=pow(x,i)/pro;
    }
    cout << "e^x is "<<sum<<endl;
}