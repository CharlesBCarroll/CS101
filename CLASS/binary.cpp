#include<iostream>
using namespace std;
int main()
{
    cout << "enter a four digit binary number: ";
    int a;
    cin >> a;
    int d4= a % 10;
    int new1 = a/10;
    int d3 = new1 % 10;
    int new2 = a/100;
    int d2 = new2 % 10;
    int new3 = a/1000;
    int d1 = new3 % 10;
    int value = (d1*8) + (d2*4) + (d3*2) + (d4*1);
    cout << "binary converted to the decimal value: "<< value <<endl;
    return 0;

}