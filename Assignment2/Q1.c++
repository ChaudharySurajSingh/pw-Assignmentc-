// Q1 - Write a program to check whether two numbers (entered bnum2 user) are equal or not (0 for not equal, 1for equal)
#include <iostream>
using namespace std;
int main()
{
int num1,num2;
cout<<"Enter the first number ";
cin >> num1;
cout<<"Enter the second number ";
cin >> num2;
cout << (num1 == num2) ? 1:0 ;
return 0;
}