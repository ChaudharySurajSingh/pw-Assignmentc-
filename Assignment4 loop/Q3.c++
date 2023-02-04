/*Q3- Write a program to find the sum of n natural number.*/

#include<iostream>
using namespace std;
int main()
{
    int num, sum;
    sum = 0;
    cout << " Please Enter a positive integer: ";
    cin >> num;
    for (int i = 1; i <= num; ++i)
    {
        sum += i;
    }
    cout << "Sum of "<<num<<" positive integer is " << sum << endl;
    return 0;
}