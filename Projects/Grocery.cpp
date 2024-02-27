/*Charles Carroll*/
/*CSCI1010 Section 1*/
/*Project 2*/
/*This program is a Grocery Management System*/
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
const int MAX = 100;
int ID[MAX];
string brand[MAX];
string Product[MAX];
double WholesalePrice[MAX];
double SalePrice[MAX];
int amount[MAX];
int current = 0;


void initialize()
{
    ID[0] = 1;
    brand[0]= "Quaker";
    Product[0]= "Oats";
    WholesalePrice[0]= 2.19;
    SalePrice[0]= 5.19;
    amount[0]= 8;

    ID[1]= 2;
    brand[1]= "Sunkist";
    Product[1]= "Juice";
    WholesalePrice[1]= 3.56;
    SalePrice[1]= 7.34;
    amount[1]= 15;

    ID[2]= 3;
    brand[2]= "Posts";
    Product[2]= "Cereal";
    WholesalePrice[2]= 1.59;
    SalePrice[2]= 4.30;
    amount[2]= 35;

    ID[3]= 4;
    brand[3]= "Valley";
    Product[3]= "Granola";
    WholesalePrice[3]= 1.12;
    SalePrice[3]= 2.56;
    amount[3]= 40;

    ID[4]= 5;
    brand[4]= "Danone";
    Product[4]= "Yogurt";
    WholesalePrice[4]= .69;
    SalePrice[4]= 1.56;
    amount[4]= 15;

    current = 5;
}
int IDcheck(int id)
{
    int i, index;
    i = id-1;
    index = ID[i]-1;
    return index;
}
void ADDNEW()
{
    if(current >= MAX)
    {
        cout << "The database is full!"<<endl;
    }
    else
    {
        ID[current] = ID[current -1] +1;
        cout << "Enter the brand name: ";
        cin >> brand[current];
        cout << "Enter the product name: ";
        cin >> Product[current];
        cout << "Enter the wholesale price: ";
        cin >> WholesalePrice[current];
        cout << "Enter the sale price: ";
        cin >> SalePrice[current];
        cout << "Enter the count of the product: ";
        cin >> amount[current];
        current += 1;
    }
}
void UPDATECOST()
{
    int id, index;
    cout << "Please enter an ID: ";
    cin >> id; 

    index = IDcheck(id);
    if(index == -1)
    {
        cout << "The ID is invalid, please re-enter a valid ID."<<endl;
    }
    else
    {
        cout << "The brand is "<< brand[index]<<endl;
        cout << "The product is "<< Product[index]<<endl;
        cout << "The current sale price is: "<<SalePrice[index]<<endl;
        cout << "Please enter a new price: ";
        cin >> SalePrice[index];
    }
}
void UPDATEWHOLESALE()
{
    int id, index;
    cout << "Please enter an ID: ";
    cin >> id;

    index = IDcheck(id);
    if(index == -1)
    {
        cout << "The ID is invalid, please enter a different one."<<endl;
    }
    else
    {
        cout << "The brand is " << brand[index] <<endl;
        cout << "The product is " << Product[index] <<endl;
        cout << "The current wholesale price is: "<< WholesalePrice[index]<<endl;
        cout << "Please enter a new price: ";
        cin >> WholesalePrice[index];
    } 
}
void UPDATEPRODUCTCOUNT()
{
    int id, index;
    cout << "Please enter an ID: ";
    cin >> id;

    index = IDcheck(id);
    if(index == -1)
    {
        cout << "The ID is invalid, please enter a different one."<<endl;
    }
    else
    {
        cout << "The brand is " << brand[index] <<endl;
        cout << "The product is " << Product[index] <<endl;
        cout << "The current count is: "<< amount[index]<<endl;
        cout << "Please enter a new count amount: ";
        cin >> amount[index];
    } 
}
void TOTALPROFIT()
{
    double total = 0;
    for(int i = 0; i<current;i++)
    {
        total += (SalePrice[i] - WholesalePrice[i]) * amount[i];
    }
    cout << "The total profit is "<< total <<endl;
}
void LOWSTOCK()
{
    cout << "The following products are in low stock: "<<endl;
    cout << "ID\tBrand\tProduct\tCount\n";
    for(int i = 0; i<current; i++)
    {
        if(amount[i]<=10)
        {
            cout << ID[i]<< '\t' << brand[i] << '\t' << Product[i]<< '\t'<<amount[i]<<endl;
        }
    }
}
void REMOVE()
{
    int id, index;
    cout << "Please enter an ID: ";
    cin >> id;

    index = IDcheck(id);
    if(index == -1)
    {
        cout << "The ID is invalid, please enter a different one."<<endl;
    }
    else
    {
        cout << "The brand is "<<brand[index]<<endl;
        cout << "The product is "<<Product[index]<<endl;
        for(int i = index; i <current-1;i++)
        {
            ID[i] = ID[i+1];
            brand[i]=  brand[i+1];
            Product[i]= Product[i+1];
            WholesalePrice[i]= WholesalePrice[i+1];
            SalePrice[i]= SalePrice[i+1];
            amount[i]= amount[i+1];
        }
        cout << "Remove succesful"<<endl;
        current -= 1;
    }
}

void DISPLAY()
{
    cout << "ID\tBrand\t\tProduct\t\tCount\t\tWholesale\tPrice\n";
    for(int i = 0; i < current; i++ )
    {
        cout << ID[i]<< '\t';
        cout << brand[i]<< "\t\t";
        cout << Product[i]<< "\t\t";
        cout << amount[i]<< "\t\t";
        cout << WholesalePrice[i]<< "\t\t";
        cout << SalePrice[i]<< endl;
    }
}

int main()
{
    initialize();

    int choose;

    while(true)
    {
        cout << "WELCOME TO THE PIRATE CONVIENCE STORE"<<endl;
        cout << "************ MENU ***************"<<endl;
        cout << "1. ADD NEW PRODUCT"<< endl;
        cout << "2. UPDATE COST PRICE BY ID"<< endl;
        cout << "3. UPDATE WHOLESALE PRICE BY ID"<<endl;
        cout << "4. UPDATE PRODUCT COUNT BY ID"<<endl;
        cout << "5. CALCULATE TOTAL PROFIT"<<endl;
        cout << "6. CHECK IF STOCK IS LOW (<10)"<<endl;
        cout << "7. REMOVE A PRODUCT BY ID"<<endl;
        cout << "8. DISPLAY ALL THE PRODUCTS"<<endl;
        cout << "9. QUIT"<<endl;
        cout << "Choose from the menu: ";
        cin >> choose;
        if(choose == 9)
        {
            cout << "Have a great day! See you next time :)"<<endl;
            break;
        }
        switch(choose)
        {
            case 1:
            ADDNEW();
            break;
            case 2:
            UPDATECOST();
            break;
            case 3:
            UPDATEWHOLESALE();
            break;
            case 4:
            UPDATEPRODUCTCOUNT();
            break;
            case 5:
            TOTALPROFIT();
            break;
            case 6:
            LOWSTOCK();
            break;
            case 7:
            REMOVE();
            break;
            case 8:
            DISPLAY();
            break;
        }
    }
}