/*Q1 - Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5};
    int size = 5;
    int oddnum =0,evennum=0;
    for (int  i = 1; i <= size; i++)
    {
        if (arr[i]%2!=0)
        {
            oddnum++;
        }
        else{
            evennum++;
        }
    }
    cout<<"odd numer in the given array are: "<<oddnum<<endl;
    cout<<"even numer in the given array are: "<<evennum;
     
    return 0;
}
