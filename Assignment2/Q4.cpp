/*Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.*/

#include <iostream>
     using namespace std;
int main()
{
    int num, first, second, third, fourth, fifth, sum;
    cout<<"please enter any five digit number::";
    cin>>num;
    first = num / 10000; // first digit
    num = num % 10000;
    second = num / 1000; // second digit
    num = num% 1000;
    third = num/ 100; // third digit
    num = num% 100;
    fourth = num/ 10; // fourth digit
    fifth = num% 10;  // fifth digit
    sum = first + fourth;
    cout << "sum of first and fourth digit is: " << sum << endl;
    return 0;
}