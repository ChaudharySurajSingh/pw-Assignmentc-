/*Q4 - Given two numbers num1and b, write num1program using functions to print all the odd numbers
between them.*/
#include <iostream>
using namespace std;
bool prime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
        
    }
    return true;
    
}
int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    cout << "Enter any two numbers : ";
    cin >> num1;
    cin >> num2;
    for (int i = num1; i <= num2; i++)
    {
        if (prime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}
