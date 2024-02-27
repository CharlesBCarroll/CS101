#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    const int max = 100;
    double grades[max], sum = 0, average, lowest;
    int used = 0;

    for(int i = 0;i<15; i++)
    {
        cout << "Enter a grade: "<<endl;
        cin >> grades[i];
        used += 1;
        if(i==0)
        {
            lowest = grades[i];
        }
        else
        {
            if(grades[i]<lowest)
            {
                lowest = grades[i];
            }
        }
    }
    //add new student
    cout << "Enter another students grade: ";
    cin >> grades[used];
    used += 1;
    //add another new student
    cout << "Enter another students grade: ";
    cin >> grades[used];
    used += 1;
    //remove
    for(int i = 5; i < used; i++)
    {
        grades[i-1]=grades[i];
    }
    used -=1;
    //sum
    for(int i =0; i < used; i++)
    {
        sum += grades[i];
    }
    //average
    average = sum / used;
    cout << "The average grade is "<<average<<endl;
    cout << "The lowest grade is "<< lowest<<endl;
}
    