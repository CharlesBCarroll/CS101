#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int num;
    int i=0;
    srand(time(0));
    while(i<10)
    {
        num = rand()%200+1;
        cout <<num<< " ";
        i++;
    }
    cout << endl;
}