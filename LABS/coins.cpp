#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies =0;
    int amount;

    cout << "Enter the amount of change (from 1 to 99 cents): ";
    cin >> amount;

    while(amount >= 25)
    {
        quarters++;
        amount -= 25;
    }
    while(amount >=10)
    {
        dimes++;
        amount -=10;
    }
    while(amount >= 5)
    {
        nickels++;
        amount -=5;
    }
    while(amount >0)
    {
        pennies++;
        amount -=1;
    }

    cout << "You get:" <<endl;
    cout << quarters << " quarters"<<endl;
    cout << dimes << " dimes"<<endl;
    cout << nickels << " nickels"<<endl;
    cout << pennies << " pennies"<<endl;

}