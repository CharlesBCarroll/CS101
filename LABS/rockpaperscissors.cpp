/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Lab week 7*/
/*This program will let you enter either rock paper or scissors and will tell the person who won*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    char Player1, Player2;
    cout << "Player 1, please show your choice: ";
    cin >> Player1;
    cout << "Player 2, please show your choice: ";
    cin >> Player2;
    if((Player1=='R'||Player1=='r')&&(Player2=='S'||Player2=='s'))
    {
        cout << "Player 1 won!"<<endl;
    }
    else if((Player1=='S'||Player1=='s')&&(Player2=='P'||Player2=='p'))
    {
        cout << "Player 1 won!"<<endl;
    }
    else if((Player1=='P'||Player1=='p')&&(Player2=='R'||Player2=='r'))
    {
        cout << "Player 1 won!"<<endl;
    }
    else if((Player2=='R'||Player2=='r')&&(Player1=='S'||Player1=='s'))
    {
        cout << "Player 2 won!"<<endl;
    }
    else if((Player2=='S'||Player2=='s')&&(Player1=='P'||Player1=='p'))
    {
        cout << "Player 2 won!"<<endl;
    }
    else if((Player2=='P'||Player2=='p')&&(Player1=='R'||Player1=='r'))
    {
        cout << "Player 2 won!"<<endl;
    }
    else if((Player2=='P'||Player2=='p')&&(Player1=='P'||Player1=='p'))
    {
        cout << "Nobody wins, redo"<<endl;
    }
    else if((Player2=='S'||Player2=='s')&&(Player1=='S'||Player1=='s'))
    {
        cout << "Nobody wins, redo"<<endl;
    }
    else if((Player2=='R'||Player2=='r')&&(Player1=='R'||Player1=='r'))
    {
        cout << "Nobody wins, redo"<<endl;
    }
    

}