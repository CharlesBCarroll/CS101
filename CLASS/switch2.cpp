/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Practice switch*/
/*This program will let you */
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    char grade;
    cout << "Enter the letter grade that you have: ";
    cin >> grade;
    switch(grade)
    {
        case 'A':
        case 'a':
            cout << "Excellent"<<endl;
            break ;
        case 'B':
            cout << "Good"<<endl;
            break ;
        case 'C':
            cout << "Average"<<endl;
            break ;
        case 'D':
            cout << "Poor"<<endl;
            break ;
        case 'F':
            cout << "Failing"<<endl;
            break ;
        default :
            cout << "You entered the wrong grade!"<<endl;
            break ;
    }
}