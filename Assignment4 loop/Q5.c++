/*Q4 - Write a program to reverse a given integer number.*/

#include <iostream>
using namespace std;
int main()
{
    int num, p, q, reverse = 0;
    cout << "Enter any number : ";
    cin >> num;
    p = num;
    while (p > 0)
    {

        q = p % 10;
        p = p / 10;
        reverse= reverse* 10 + q;
    }
    cout << "Reverse of number " << num << " is " << reverse;
    return 0;
}
