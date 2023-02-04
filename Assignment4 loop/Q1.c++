/*Q1 - Write a program to calculate the factorial of a number.*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num,fact=1;
    cout<<"Please enter any number:";
    cin>>num;
    for (int  i = 1; i <= num; i++)
    {
        fact = fact*i;
    }
    cout<<"factorial of "<<num <<" is "<<fact;
    
    return 0;
}

