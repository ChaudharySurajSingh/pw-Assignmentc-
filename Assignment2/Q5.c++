/*Q5 - write a program to calculate the sum of digits of a 3 digit number.*/

#include <iostream>
using namespace std;
int main()
{
    int num, first, second, third, sum;
    num = 123;
    /* find each digit of this number and then finally add the digits*/
    first = num / 100; // first digit
    num=num % 100;
    second = num / 10; // second digit
    third = num % 10;  // third digit
    sum = first + second + third;
    cout << "sum of 3 digits is: " << sum << endl;
    return 0;
}