/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Project 1*/
/*This program is a random number game*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int numb2, num, tries;
    char choice, choice2;
    cout << "********** Welcome to the number guessing game ************\n";
        cout << "You have 10 tries to guess the random number between 0 and 100\n";
        cout << "A. Begin playing the game\n";
        cout << "B. Quit the program\n";
        cin >> choice2;
         if(choice2 == 'A'||choice2 == 'a')
        {
        do {
        if(choice2 == 'B'||choice2 =='b')
        {
            break;
        }
        srand(time(0));
        num = rand()%100 +1;
        for(int i= 0; i<10; i++)
        {
            tries = i +1;
            cout << "Choose a number: ";
            cin >> numb2;
            if(numb2<num)
            {
                cout<< "too low! Try again"<<endl;
            }
            else if(numb2>num)
            {
                cout << "too high! Try again"<<endl;
            }
            else if(numb2 == num)
            {
                cout << "You Won in "<<tries<< " tries!"<<endl;
                break;
            } 
        }
        if(numb2!=num)
        {
            cout << "You lose!"<<endl;
        }
        cout << "Would you like to restart? Y for yes N for no :";
        cin >> choice;
        } while(choice == 'Y'||choice =='y');
        }
    if(choice == 'N'||choice == 'n')
    {
        cout << "Thanks for playing, come back soon!"<<endl;
    }
}