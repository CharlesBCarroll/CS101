#include<iostream>
#include<cmath>
using namespace std;
double celsius(double f)
{
    {
        double c;
        c = (f-32) * 5/9;
        return c;
    }
}
int main()
{
    double f1 =105, f2 =199.5;
    cout << "Temperature 1 in celsius is "<<celsius(f1)<<endl;
    cout << "Temperature 2 in celsius is "<<celsius(f2)<<endl;
    return 0;
}
    