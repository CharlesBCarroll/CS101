#include<iostream>
using namespace std;
int main()
{
    int number, tens, ones, newnumber;
    cout << "Enter the two digit number that you want swapped: ";
    cin >> number;
    ones = number % 10;
    tens = number / 10;
    newnumber = ones * 10 + tens;
    cout << "The new number is: " << newnumber <<endl;
    return 0;


}