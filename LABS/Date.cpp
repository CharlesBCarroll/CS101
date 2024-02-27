#include<iostream>
using namespace std;
int main()
{
    int m,d,y;
    cout << "enter the month, day, and year to get the day of the week that it falls on:\n";
    cout << "Month (1 for jan, 2 for feb, etc.): ";
    cin >> m;
    cout << "Day: ";
    cin >> d;
    cout << "Year: ";
    cin >> y;
    int y0 = y-(14-m)/12;
    int x = y0 + y0/4 - y0/100 +y0/400;
    int m0 = m +12 * ((14-m)/12) -2;
    int d0 = (d+x+(31*m0)/12)%7;
    cout << "The day that the date entered falls on is (0 for sunday, 1 for monday, etc.): "<<d0<<endl;
    return 0;
}