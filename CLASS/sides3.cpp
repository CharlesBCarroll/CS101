/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Comparing 3 sides to see if the traingle is equilateral*/
/*This program will let you type in 3 sides and it will compare them to see if they are equal to eachother*/
#include<iostream>
using namespace std;
int main()
{
    int side1,side2,side3;
    cout << "Enter the length of each side to determine if the triangle is equilateral\n";
    cout << "Side 1 length: ";
    cin >>side1;
    cout << "Side 2 length: ";
    cin >> side2;
    cout << "Side 3 length: ";
    cin >> side3;
    if(side1==side2&&side2==side3)
    {
        cout << "The triangle is equilateral"<<endl;
    }
    else
    {
        cout << "The triangle is not an equilateral triangle"<<endl;
    }
    return 0;
}