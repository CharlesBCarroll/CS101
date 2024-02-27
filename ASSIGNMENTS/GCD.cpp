/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Assingment 4*/
/*This program finds the greatest common divsor between two integers*/
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    int m, n, gcd;
    cout << "enter two integers: ";
    cin >> m >> n;
    if(n == 0)
        {
            gcd = m;
        }
    if(m == 0)
        {
            gcd = n;
        }
    if(m<0)
    {
        m *= -1;
    }
    if(n<0)
    {
        n*=-1;
    }
    for(int i = 1; i <= m && i <= n;i++)
    {
        if(m%i ==0 && n%i == 0)
        {
            gcd = i;
        }
    }
    cout << "the greatest common divisor is "<<  gcd << endl;
}

