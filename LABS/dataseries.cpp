/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Lab week 11*/
/*This program lets user enter a series of numbers and puts out sum, smallest number and even numbers*/
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    int sum1 = 0;
    int num, smallest;
    int sum2 = 0;
    cout << "Please enter a series of numbers, end the series by entering 0:"<<endl;
    cin >> num;
    smallest = num;
    while(num != 0)
    {
        sum1 += num;
        if(num != 0 && num<smallest)
        {
            smallest = num;
        }
        if(num%2 == 0)
        {
            sum2 += 1;
        }
        cin >> num;
    }
    cout << "The sum is: "<<sum1<<endl;
    cout << "The smallest number is "<<smallest<<endl;
    cout << "There are "<< sum2 << " even numbers"<<endl;
}
