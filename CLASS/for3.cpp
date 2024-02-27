#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    cout << "Enter 10 numbers and it will find the largest value: "<<endl;
    int num,num1;
    int tries = 1;
    for(int i=1;i<=10;i++)
    {
        cout << "Enter number "<<tries<<":";
        tries++;
        cin>>num;
        if(i==1)
        {
            num1 = num;
        }
        else
        {
            if(num > num1)
            {
                num1 = num;
            }
        }
    }
    cout << "the largest number is: "<<num1<<endl;
}