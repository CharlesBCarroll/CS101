#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double t,v;
    cout << "Enter the temperature and the wind speed below:\n";
    cout << "Temperature (In Fahrenheit): ";
    cin >> t;
    cout << "Wind speed (in miles per hour): ";
    cin >> v;
    double chill = 35.74 + 0.6215 * t - (35.75 * pow(v,.16)) + ((0.4275 * t) * pow(v,.16));
    cout << "The wind chill would be: " <<chill<<endl;
    return 0;
}