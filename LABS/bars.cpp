/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Lab week 6*/
/*This program will let you enter your height, weight, and age, and gender
and it will determine how many candy bars you can eat without 
gaining any weight*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int age;
    char gender;
    double weight, height, BMR, Bars;
    cout << "Enter the gender, M for male, and F for Female: ";
    cin >> gender;
    cout << "Enter the weight (pounds): ";
    cin >> weight;
    cout << "Enter the height (inches): ";
    cin >> height;
    cout << "Enter the age: ";
    cin >> age;
    if(gender == 'F')
    {
        BMR = 655+(4.3*weight)+(4.7*height)-(4.7*age); 
    }
    else
    {
        BMR= 66+(6.3*weight)+(12.9*height)-(6.8*age);
    }
    Bars = BMR/230;
    cout << "You can eat "<<Bars<<" chocolate bars!"<<endl;
    return 0;
}