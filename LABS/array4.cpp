/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Lab week 12*/
/*This program allows the user to enter 10 numbers*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    const int MAX = 100;
    int a[MAX], used = 0, tries = 0, sum =0, tries2 =0;
    cout << "Enter 10 values for the array: ";
    //10 values entered
    for(int i = 0;i<10;i++)
    {
        cin >> a[i];
        used+=1;
    }

    //reversed order
    for(int i = 9;i>=0;i--)
    {
        cout << a[i]<< " ";
    }
    cout << endl;

    //remove 1
    for(int i = 0; i < used; i++)
    {
        a[i-1]=a[i];
    }
    used -=1;

    //first new value 
    cout << "Enter a new value: ";
    cin >> a[used];
    used += 1;

    //enter another value
    cout << "Enter another new value: ";
    cin >> a[used];
    used += 1;

    //remove 3
    for(int i = 3; i < used; i++)
    {
        a[i-1]=a[i];
    }
    used-=1;

    cout <<"Currently, the elements in the array are: ";
    //display current elements
    for(int i = 0; i<used;i++)
    {
        cout << a[i]<<" ";
    }
    cout << endl;

    //sum
    for(int i =0; i < used; i++)
    {
        sum += a[i];
    }

    //average
    int average = sum /used;
    cout << "The average value is "<<average<<endl;

    //more than average/less than average 
    for(int i =0; i < used; i++)
    {
        if(a[i]>average)
        {
            tries++;
        }
        else
        {
            tries2++;
        }
    }
    cout << "there are "<<tries2<<" elements less than average"<<endl;
    cout << "there are "<<tries<< " elements more than average"<<endl;
}
