/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Lab week 11*/
/*This program counts number of digits in certain number*/
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    int integer;
    int sum = 0;
    cout <<"Enter an integer: ";
    cin >> integer;
    do{
        integer /= 10;
        sum++;
    }while(integer>0);
    cout << "The number of digits is: "<<sum<<endl;
}