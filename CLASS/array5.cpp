#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
int sum(int a[], int n)
{
    int sum=0;
    for(int i =0; i <n;i++)
    {
        sum += a[i];
    }
    return sum;
}
int largest(int a[],int n)
{
    int largest=0;
    for(int i = 0; i <n;i++)
    {
        if(i==0)
        {
            largest = a[i];
        }
        else
        {
            if(a[i]>largest)
            {
                largest = a[i];
            }
        }
    }
    return largest;
}
void swap(int a[], int n)
{
    for(int i = 0; i < n/2; i++)
    {
        int temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
    for(int i =0; i<n; i++)
    {
        cout << a[i]<< " ";
    }
    cout<<endl;
    
}
int main()
{
    int n;
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "List of elements: ";
    for(int i =0; i<10; i++)
    {
        cout << a[i]<< " ";
    }
    cout <<endl;
    cout << "The sum of all the elements is "<< sum(a,10)<<endl;
    cout << "The largest value in the array is " << largest(a, 10)<<endl;
    swap(a,10);
}


