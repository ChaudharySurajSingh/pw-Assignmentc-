/*Q4 - Given two numbers a and b, write a program using functions to print all the odd numbers between them.*/
#include <iostream>
using namespace std;
bool odd(int num)
{
    if (num % 2 != 0)
    {
        return true;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    cout << "Enter the two numbers : ";
    cin >> num1;
    cin >> num2;
    for (int i = num1; i <= num2; i++)
    {
        if (odd(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}
