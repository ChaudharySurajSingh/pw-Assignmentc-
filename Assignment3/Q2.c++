/*Q2- Write a program to print absolute value of a number entered by the user.*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    if (num < 0)
    {
        num = num * (-1);
    }
    cout << "Absolute value is " << num << endl;
    return 0;
}