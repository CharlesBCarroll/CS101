/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Lab week 10*/
/*This program adds up 10 random numbers between 20 and 80*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int num;
    int i=0;
    int sum = 0;
    srand(time(0));
    cout << "The random numbers are: ";
    while(i<10)
    {
        num = (rand()%60)+20;
        cout <<num<< " ";
        sum += num;
        i++;
    }
    cout<< endl;
    cout << "The sum of them is "<< sum << endl;
}