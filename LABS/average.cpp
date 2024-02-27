/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Lab week 12*/
/*This program allows the user to enter 10 numbers and it outputs the average*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num[10], used = 0, sum=0, tries =1;
    cout << "enter 10 numbers and it will output the average of those numbers"<<endl;
    for(int i = 0;i<10;i++)
    {
        cout << "Number "<<tries<<" :";
        cin >> num[i];
        sum+=num[i];
        used++;
        tries++;
    }
    int average = sum /used;
    cout << "The average of those numbers is "<<average<<endl;
}