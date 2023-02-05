/*Q1 - Write a function to print squares of the first 5 natural numbers*/
#include<iostream>
using namespace std;
int num = 5;
int square(int n);
int main(int argc, char const *argv[])
{
    for (int  i = 1; i <= num; i++)
    {
        cout<<square(i)<<" ";
    }
    return 0;
}
int square(int n){
    int sqr = n*n;
    return sqr;
    
}
