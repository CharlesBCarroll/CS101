#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    cout << "Enter the value of two coordinates below:\n";
    cout << "value of first points x: ";
    cin >> x1;
    cout << "value of first points y: ";
    cin >> y1;
    cout << "value of second points x: ";
    cin >> x2;
    cout << "value of second points y: ";
    cin >> y2;
    double distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout << "The distance between the two points would be: "<<distance<<endl;
    return 0;
}