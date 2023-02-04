/*Q6 - Design a calculator to perform basic arithmetic operations(+, -, /, *)*/

#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    cout << "Enter the first number ";
    cin >> num1;
    cout << "Enter the second number ";
    cin >> num2;
    cout << "addition = " << num1 + num2 << endl;
    cout << "subtraction = " << num1 - num2 << endl;
    cout << "multiplication = " << num1 * num2 << endl;
    cout << "Division = " << num1 / num2 << endl;
    return 0;
}