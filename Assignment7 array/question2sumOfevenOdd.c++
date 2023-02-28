/*Q2 - Given an integer array and its size, find the sum of the greatest and the smallest integer present in the array. Here 1< size <101*/
#include<iostream>
using namespace std;
int max(int arr[], int n) ;
int min(int arr[], int n) ;
int main(int argc, char const *argv[])
{
    int array[101];
    int n;
    cout<<"enter the number of element:\n";
    cin>>n;
    cout<<"now enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int small = min(array, n);
    int large = max(array, n);
    
    cout<< "smallest number in the array is: \n"<<small << endl;
    cout<<"largest number in the array is: \n"<<large<<endl;
    cout<<"sum of the minimimum and maximume number of the array is: \n"<<small+large;
    return 0;
}
int max(int arr[],int n){
    int maxNum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>maxNum)
        {
            maxNum=arr[i];
        }
    }
    return maxNum;
}
int min(int arr[],int n){
    int minNum  = arr[0];
    int minnum= 0 ;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>minNum)
        {
           minnum = minNum;
        }
        else
        {
            minNum=arr[i];
        }
    }
    return minnum;
    
}