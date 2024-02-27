/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Assignment 2*/
/*This program will let the user enter the numeric grade and it will output the letter grade */
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    double numeric;
    char letter;
    cout << "Enter a numeric grade: ";
    cin >> numeric;
    if(numeric>=90&&numeric<=100)
    {
        letter = 'A';
    }
    else if(numeric>=80&&numeric<=89.9)
    {
        letter = 'B';
    }
    else if(numeric>=70&&numeric<=79.9)
    {
        letter = 'C';
    }
    else if(numeric>=60&&numeric<=69.9)
    {
        letter = 'D';
    }
    else if(numeric>=0&&numeric<=59.9)
    {
        letter = 'F';
    }
    cout << "The letter grade is "<<letter<<endl;
    return 0;
}