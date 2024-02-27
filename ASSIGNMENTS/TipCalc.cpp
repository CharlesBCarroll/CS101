#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the bill amount in dollars: ";
    double bill;
    int people;
    int tip;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cin >> bill;
    cout << "Amount of people splitting the bill: ";
    cin >> people;
    cout << "Percent you will be tipping: ";
    cin >> tip;
    double person = bill/people;
    double total = person * tip/100 + person;
    cout << "The tip per person will be " <<person * tip/100<< " dollars\n";
    cout << "The amount each person will pay is " <<total<< " dollars\n";
    return 0;

}