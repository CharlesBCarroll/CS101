#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    cout << "enter 10 numbers: "<<endl;
    int num,largest,smallest,abs;
    for(int i =1;i<=10;i++)
    {
        cout << "enter a number: ";
        cin >> num;
        if(i == 1)
        {
            smallest = num;
            largest = num;
        }
        else
        {
            if(num < smallest)
            {
                smallest = num;
            }
            if(num>largest)
            {
                largest = num;
            }
        }
    }
    abs = largest - smallest;
    if(abs < 0)
    {
        abs = abs * -1;
    }
    cout << "Absolute value of the largest subtracted by the smallest = "<<abs<<endl;
}