/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Lab week 3*/
/*This program will find the address of the riddler*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int thousand, hundred, ten, one, address;
    address = 1001;
    thousand=0;
    hundred =0;
    ten = 0;
    one = 0;
    while(address>1000&&address<=9999)
    {
        address++;
        thousand = (address/1000)%10;
        hundred = (address/100)%10;
        ten =(address/10)%10;
        one = (address/1)%10;
        if(thousand != hundred && thousand != ten && thousand != one && hundred != ten && hundred != one && ten != one )
        {
            if(thousand == (3 * ten))
            {
                if(one%2 != 0)
                {
                    if(thousand + hundred + ten + one == 27)
                    {
                        cout << "the address is "<< address<<endl;
                    }
                }
            }
        }
    }
}
