#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    double i = 1;
    double pro = 1;
    cout << "enter an integer: ";
    cin >> n;
    while(i<=n)
    {
        pro *= 1/i;
        i++;
    }
    cout << pro<<endl;
    return 0;
}