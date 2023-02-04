/*Q10- Write a C++ program to print a rectangle out of **/

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int StarRows, StarColumns, i, j;
    cout << "Please Enter the number of StarRows: ";
    cin >> StarRows;
    cout << "Please Enter the number of StarColumns: ";
    cin >> StarColumns;
    for (i = 1; i <= StarRows; i++)
    {
        for (j = 1; j <= StarColumns; j++)
        {               
            cout << "*"; 
        }
        cout << "\n"; 
    }
    getch();
    return 0;
}