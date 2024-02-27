#include<iostream>
using namespace std;
int main()
{
    cout << "Please enter the value of the radius to get the Area of the circle.\n";
    double radius, pie;
    pie = 3.141592653589793238;
    cout << "Radius = ";
    cin >> radius;
    cout << "The area of the circle is "<<radius * radius * pie << endl;
    return 0;
}