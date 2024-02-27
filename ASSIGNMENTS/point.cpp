#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x, y, distance;
    cout << "enter the x coordinate and y coordinate below:\n";
    cout << "x value: ";
    cin >> x;
    cout << "y value: ";
    cin >> y;
    distance = sqrt(pow(x,2)+ pow(y,2));
    cout << "The distance from the origin to that point is " <<distance<<endl; 
    return 0;
}
