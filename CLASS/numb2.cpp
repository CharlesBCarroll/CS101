/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Maximum 2 values*/
/*This program will show how you can use true or false to show the maximum for each number*/
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout << "Enter two numbers\n";
    cout << "Number 1:";
    cin >> x;
    cout << "Number 2:";
    cin >> y;

    if(x > y)
    {
        cout << "The larger number is " << x<<endl;
    }
    else
    {
        cout << "The larger number is " << y << endl;

    }

}