/*Charles Carroll*/
/*CSCI1010 Section1*/
/*Assignment 2 EAN*/
/*This program will let the user enter the EAN number and it will display the checking digit for that EAN*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12, sum1, sum2, sum3, sum4;
    cout << "Please enter the first 12 digits and use a space to seperate them:\n";
    cin >> a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9>>a10>>a11>>a12; /*user enters the first 12 digits of bar code*/
    sum1 = a2 + a4 + a6 + a8 + a10 + a12; /*The even numbers in the sequence are added to be first sum*/
    sum2 = a1 + a3 + a5 + a7 + a9 + a11; /*Odd numbers are added for sum 2*/
    sum3 = (sum1 * 3) + sum2; /*The first sum is multiplied by 3 & added to sum 2*/
    sum4 = 9 - (--sum3 % 10); /*sum3 is subtracted by 1 and multed by 10 to get the remainder, then subtracted from 9*/
    cout << "The checking digit is "<<sum4<<endl;
    return 0;
}