#include<iostream>
using namespace std;
int main()
{
    cout << "Welcome to the area calculator, enter your height and length below\n";
    int height, length;
    cout << "Height = ";
    cin >> height;
    cout << "Length = ";
    cin >> length;
    cout << "The area of the rectangle is "<< height * length << endl;
    return 0;
}