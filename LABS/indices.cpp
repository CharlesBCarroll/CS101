#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
void indices(int arr[], int n, int g);
int main()
{
    int arr[8] = {2,10,11,15,7,8,13,9};
    int g;
    cout << "The values in the array are: "<<endl;
    for(int i =0; i < 8; i++)
    {
        cout << arr[i]<< " ";
    }
    cout <<endl;
    cout << "The targest value is: ";
    cin >> g;
    indices(arr, 8, g);

}
void indices(int arr[], int n, int g)
{
    for(int i =0; i < n; i++)
    {
        for(int j = i+1;j<5;j++)
        {
            if(arr[i]+arr[j]==g)
            {
                cout << "The indices are "<<i<< " and "<<j<< " sums to "<<g<<endl;
            }
        }
    }
}