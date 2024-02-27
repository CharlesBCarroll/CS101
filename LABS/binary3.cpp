/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Lab week 10*/
/*This program converts binary to decimal*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int binary, newbinary;
    int sum = 0;
    int i = 0;
    cout << "enter a binary number: ";
    cin >> binary;
    do{
        newbinary = binary % 10;
        sum += newbinary * pow(2,i);
        i++;
        binary = binary / 10;
    }while(binary>0);
    cout <<"Decimal value is "<<sum<<endl;
}