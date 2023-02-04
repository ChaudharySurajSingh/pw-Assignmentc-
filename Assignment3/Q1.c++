/*Q1- Write a program which takes the values of length and breadth from user and check if it is a
square or not.*/

#include <iostream>
using namespace std;

int main()
{
    int length, breadth;
    cout << "Please Enter length: " << endl;
    cin >> length;
    cout << "Please Enter breadth: " << endl;
    cin >> breadth;

    if (length == breadth)
    {
        cout << "It is a square" << endl;
    }
    else
    {
        cout << "It is a rectangle" << endl;
    }

    return 0;
}