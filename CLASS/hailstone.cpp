#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout << "enter an integer that you want to be put through the haistone sequence: ";
    cin >> n;
    while(n != 1)
    {
        if(n%2 == 1)
        {
            n = 3*n + 1;
        }
        else
        {
            n = n/2;
        }
        cout << n << " ";
    }
}