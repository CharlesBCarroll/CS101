#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int number[10];
int n = 0;
void swap();
int main()
{
    cout << "The values before swap:"<<endl;
    for(int i =0; i < 10; i++)
    {
        cin >> number[i];
        n++;
    }
    cout << "The values after the swap:"<<endl;
    swap();
    
}
void swap()
{
    int number2 = number[1];
    number[1] = number[n-2];
    number[n-2]= number2;
    for(int i = 0; i<10;i++)
    {
        cout << number[i] << " ";
    }
    cout <<endl;
}