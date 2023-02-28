/*Q3 - Given an integer array and its size, reverse the array and print it. Here 1<size<101*/
#include<iostream>
using namespace std;
void reverse (int arr[],int n);
int main(int argc, char const *argv[])
{
    int array[101];
    int n;
    cout<<"enter the number of element to be store in the array:\n";
    cin>>n;
    cout<<"now enter the element of array:\n";
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<"the original array is:: ";
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    reverse(array,n);
    cout<<"the reverse array is:: ";
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
void reverse(int arr[],int n){
    int start =0,end=n-1;
    while (end>start)
    {
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }   
}