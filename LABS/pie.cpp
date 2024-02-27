/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Lab week 3*/
/*This program will let the user enter an integer and then it will put out the value of pie*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    double i = 0;
    double pi = 0;
    cout << "enter an integer: ";
    cin >> n;
    while(i<=n)
    {
        pi += 4.0 * (pow(-1, i) / (2 * i +1));
        i += 1;
    }
    
    cout << "the value of pi is "<<pi <<endl;
}
    

