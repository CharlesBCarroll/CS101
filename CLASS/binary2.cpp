#include<iostream>
using namespace std;
int main()
{
    int binary, d1, d2, d3, d4, decimal;
    cout << "Enter 4 digit binary: ";
    cin >> binary;
    d4 = binary%10;
    binary = binary/10;
    d3 = binary%10;
    binary = binary/10;
    d2 = binary % 10;
    binary = binary/10;
    d1 = binary %10;
    decimal = d1 * 8 + d2 *4 + d3 * 2 + d1 *1;
    cout << "Decimal value: " <<decimal<< endl;
    return 0;

}