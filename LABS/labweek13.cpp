#include<iostream>
#include<cmath>
using namespace std;
int range(int x, int y, int n)
{
    bool result = false;
    if(x<n-1&&y<n-1)
    {
        result = true;
    }
    else if(x>n-1||y>n-1)
    {
        result = false;
    }
    return result;
}
int main()
{
    int x, y, n;
    cout <<"Please enter two numbers: ";
    cin >> x >> y;
    cout << "Please enter the check value: ";
    cin >> n;
    if(range(x,y,n)==1)
    {
        cout << "Both are in Range"<<endl;
    }
    if(range(x,y,n)==0)
    {
        cout << "Not in Range"<<endl;
    }
    return 0;
}