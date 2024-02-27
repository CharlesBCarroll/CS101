#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
int pali(int num);
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(pali(num)==1)
    {
        cout << num << " is a palindrome"<<endl;
    }
    if(pali(num)==0)
    {
        cout << num << " is not a palindrome"<<endl;
    }
    return 0;
}
int pali(int num)
{
    int digit,n, rev= 0;
    n = num;
    do
    {
        digit = num %10;
        rev = (rev * 10 ) + digit;
        num = num/10; 
    }while (num != 0);
    bool result = false;
    if(n == rev)
    {
        result = true;
    }
    else 
    {
        result = false;
    }
    return result;
}
