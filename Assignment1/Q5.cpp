/*Q5 - Write a C++ program to find size of basic data types.*/
#include <iostream>
using namespace std;

int main()
{
    cout << "Size of fundamental data types :\n";
    cout << " The sizeof\t(char):\t " << sizeof(char) << " bytes \n";
    cout << " The sizeof\t(short):\t " << sizeof(short) << " bytes \n";
    cout << " The sizeof\t(int):\t" << sizeof(int) << " bytes \n";
    cout << " The sizeof\t(long):\t" << sizeof(long) << " bytes \n";
    cout << " The sizeof\t(long long):\t" << sizeof(long long) << " bytes \n";
    cout << " The sizeof\t(float):\t" << sizeof(float) << " bytes \n";
    cout << " The sizeof\t(double):\t" << sizeof(double) << " bytes \n";
    cout << " The sizeof\t(long double):\t" << sizeof(long double) << " bytes \n";
    cout << " The sizeof\t(bool):\t" << sizeof(bool) << " bytes \n\n";
    return 0;
}