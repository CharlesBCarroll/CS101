/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Lab week 7*/
/*This program will let you enter account balance, get interest off of that value, and then take that total and apply more interest*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    double balance, interest1, totalamount;
    cout << "Please enter the account balance: $";
    cin >> balance;
    if(balance<=1000)
    {
        interest1= balance * .015;
    }
    else if(balance>1000)
    {
        interest1= ((balance - 1000)*.01)+(1000 * .015);
    }
    totalamount = balance + interest1;
    cout << "The interest due is $"<<interest1<<endl;
    cout << "The total amount due is $"<<totalamount<<endl;
    if(totalamount<=10)
    {
        cout <<"The minimum payment is $"<<totalamount<<endl;
    }
    else if(10>=(totalamount*.1))
    {
        cout <<"The minimum payment is $10"<<endl;
    }
    else if(10<=(totalamount*.1))
    {
        cout <<"The mimimum payment is $"<<(totalamount*.1)<<endl;
    }
    return 0;

}