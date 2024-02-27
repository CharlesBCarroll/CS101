#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    int a[10];
    cout << "Enter 10 values for a: "<<endl;
    for(int i=0; i<10; i++)
    {
        cin >> a[i];
    }
    cout << "The 4th number entered is "<<a[3]<<endl;
}