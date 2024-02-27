#include<iostream>
#include<cmath>
using namespace std;
void time(int hour)
{
    if(hour>=1&&hour<12)
    {
        cout << "Good Morning"<<endl;
    }
    else if(hour>=12&&hour<17)
    {
        cout << "Good Afternoon"<<endl;
    }
    else if(hour>=17 && hour<=24)
    {
        cout << "Good Evening"<<endl;
    }
}
int main()
{
    int x;
    cout << "Enter a time in hours:";
    cin >> x;
    time(x);
}