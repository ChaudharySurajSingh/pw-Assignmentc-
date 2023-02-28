/* Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
 that they belong to different arrays and are not at the same index. Here 1<size<101*/
#include<iostream>
#include<climits>
using namespace std;
int sumOfMin(int A1[], int A2[], int n) ;
int main(int argc, char const *argv[])
{
    int array1[101],n;
    int array2[101];
    cout<<"enter the number of element of array's: ";
    cin>>n;
    cout<<"now enter the element of first array:\n";
    for (int i = 0; i < n; i++)
    {
        cin>>array1[i];
    }
    cout << "now enter the element second array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> array2[i];
    }
    cout << "sum of minimum of both array is: " << sumOfMin(array1, array2, n);

return 0;
}
int sumOfMin(int a[], int b[], int n)
{
int minA = INT_MAX, minB = INT_MAX, indexA = 0, indexB = 0;
int min2A = INT_MAX, min2B = INT_MAX;
for (int i = 0; i < n; i++)
{
        if (a[i] < minA)
        {
            min2A = minA;
            minA = a[i];
            indexA = i;
        }
        else if (a[i] < min2A)
            min2A = a[i];
        if (b[i] < minB)
        {
            min2B = minB;
            minB = b[i];
            indexB = i;
        }
        else if (b[i] < min2B)
            min2B = b[i];
}
if (indexA != indexB)
        return minA + minB;
return min(min2A + minB, min2B + minA);
}