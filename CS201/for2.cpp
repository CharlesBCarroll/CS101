#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    cout << "Enter 10 numbers and it will produce the sum: "<<endl;
    int sum=0;
    int num;
    int tries = 1;
    for(int i=1;i<11;i++)
    {
        cout << "Enter number "<<tries<<":";
        tries++;
        cin>>num;
        sum += num;
    }
    cout << "the sum is: "<<sum<<endl;
}