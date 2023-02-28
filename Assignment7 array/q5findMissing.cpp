/*Q5 - Given an array containing n distinct integers in the range [0,n] (inclusive of both) Find and return the only number of the range that is not present in the array. Here 1<n<101.*/
#include<iostream>
using namespace std;
int Missing(int arr[], int n) ;
int main(int argc, char const *argv[])
{
    /*Algorithm:
We find the sum of the numbers from [0,n] and subtract the sum of the given array from it and this gives
us the missing number in the range*/
int array[101],n;
cout<<"enter the number of element:";
cin>>n;
cout<<"now enter the element of array: \n";
for (int i = 0; i < n; i++)
{
    cin>>array[i];
}
cout<<"the missing element is: "<<Missing(array,n);

    return 0;
}
int Missing(int arr[], int n)
{
    int missing = -1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
    sum += arr[i];
    }
    int range_sum = (n) * (n + 1) / 2;
    missing = range_sum - sum;
    return missing;
}