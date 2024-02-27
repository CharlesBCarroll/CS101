#include<iostream>
#include<cmath>
using namespace std;
double area(double r)
{
    {
        const double PI = 3.14;
        double a;
        a = r * r * PI;
        return a;
    }
}
int main()
{
    double r1 = 7, r2 =5.6, r3 = 8, r4 = 10.8;
    cout << "Circle 1 area is "<< area(r1)<<endl;
    cout << "Circle 2 area is "<< area(r2)<<endl;
    cout << "Cirlce 3 area is "<< area(r3)<<endl;
    cout << "Circle 4 area is "<< area(r4)<<endl;
    return 0;
}