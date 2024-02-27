#include<iostream>
#include<cmath>
using namespace std;
int largest(int a, int b, int c)
{
    {
        int large;
        if(a > b && a > c)
        {
            large = a;
        }
        else if(b>a&&b>c)
        {
            large = b;
        }
        else
        {
            large = c;
        }
        return large;
    }
}

int main()
{
    int a1, a2, a3;
    cout << "Enter three integers: ";
    cin >> a1 >> a2 >> a3;
    cout << "The largest is " << largest(a1,a2,a3)<<endl;
    return 0;
}