/*Q2 - Write a program to take the values of two variables a and b from the keyboard
 and then check if both the conditions 'a < 50' and'a < b' are true.*/
#include <iostream>
    using namespace std;
int main()
{
    int num1, num2;
    cout << " Please Enter the first number : ";
    cin >> num1;
    cout << " Please Enter the second number : ";
    cin >> num2;
    cout << ((num1 < 50) && (num1 < num2)) ? 1 : 0;
    return 0;
}