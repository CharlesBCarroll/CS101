#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    int sum=0;
    for(int i=1;i<=20;i++)
    {
        sum += pow(i,2);
    }
    cout << "sum="<<sum<<endl;
}