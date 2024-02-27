/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Different calculations depending on what they type in*/
/*This program will let the user enter what operation they want to use and then it will use that operation for two numbers*/
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    char Letter;
    double numb1, numb2;
    {
        cout << "************* WELCOME TO THE CALCULATOR ***************\n";
        while(1)
        {
            cout << "Please select from the menu\n";
            cout << "A. Addition\n";
            cout << "S. Subtraction\n";
            cout << "M. Multiplication\n";
            cout << "D. Division\n";
            cout << "Q. Quit program!\n";
            cout << "Enter your choice: ";
            cin >> Letter;
            if(Letter == 'Q'||Letter == 'q')
            {
                break;
            }
            cout << "Please enter two numbers that you want to use in the calculator: ";
            cin >> numb1 >> numb2;
            switch(Letter)
            {
                case 'A':
                case 'a':
                    cout << numb1 << "+" <<numb2 <<"=" <<(numb1+numb2)<<endl;
                    break;
                case 'S':
                case 's':
                    cout << numb1 << "-" <<numb2 <<"="<<(numb1-numb2)<<endl;
                    break;
                case 'M':
                case 'm':
                    cout << numb1 << "*" <<numb2 << "="<<(numb1*numb2)<<endl;
                    break;
                case 'D':
                case 'd':
                    cout << numb1 << "/" <<numb2 << "=" <<(numb1/numb2)<<endl;
                    break;
                default:
                    cout << "Please enter a valid letter so we know what operation to use!"<<endl;
                    break;
            }   
        }   
    }

}
