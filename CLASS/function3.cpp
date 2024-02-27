#include<iostream>
#include<cmath>
using namespace std;
bool capital(char x)
{
    bool result = false;
    if(x>='A'&&x<='Z')
    {
        result = true;
    }
    else if(x<='Z'&&x>='a')
    {
        result = false;
    }
    return result;
}
int main()
{
    char x;
    cout << "Enter a letter and it will determine if it uppercase or lowercase: ";
    cin >> x;
    if(capital(x)==0)
    {
        cout << "The letter is lowercase!"<<endl;
    }
    else
    {
        cout << "The letter is Uppercase!"<<endl;
    }
    return 0;
}