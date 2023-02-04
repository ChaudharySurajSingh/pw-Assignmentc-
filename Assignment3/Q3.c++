/*Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price (S.P.) and calculate Profit or Loss.*/

#include <iostream>
using namespace std;
int main()
{
    int CP, SP, amt;
    cout << "Enter cost price: ";
    cin >> CP;
    cout << "Enter selling price: ";
    cin >> SP;
    if (SP > CP)
    {
        amt = SP - CP;
        cout << "Profit = " << amt;
    }
    else if (CP > SP)
    {
        amt = CP - SP; 
        cout << "Loss = " << amt;
    }
    else
    {
        cout << "No Profit No Loss."; 
    }
    return 0;
}