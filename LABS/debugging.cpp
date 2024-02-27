#include<iostream>
using namespace std;
int main()
{
    double amount,newamount, discount, afterdiscount;//need 3 more variables, the same variable cannot be used the whole time or the value would not be correct
    cout << "Enter the total amount: ";
    cin >> amount;
    cout << "debugging " << amount << "= d1"<<endl;//this is to show if it is getting the correct amount
    if(amount >= 200) //there should not be a semi colon at the end of this, this is a warning
    {
        discount = amount * 0.2; //there has to be a new variable for the discount to be subtracted by the original amount
        cout << "debugging " << discount << "= d2"<<endl;
        //the amount is also not 80 percent off but 20 percent so the .8 should be changed 
        afterdiscount = amount - discount;//need to subtract the discount from original price
        cout << "debugging " << afterdiscount << "= d3"<<endl;
    }
    newamount = afterdiscount + (afterdiscount * 0.15); //need to add the tax rate to the after discount as well as change the variables in the equation
    //needed to change the variable you are getting to the new amount because it holds a different value than the amount
    //need to change amount in the equation to the afterdiscount variable so the right amount is getting taxed
    cout << "The total amount is " << newamount << endl; //change from amount to new amount that is being displayed
    //this is for debugging purposes
}
