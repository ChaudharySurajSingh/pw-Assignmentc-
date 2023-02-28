
// C++ program to find the element which is greater than
// all left elements and smaller than all right elements.
#include <bits/stdc++.h>
using namespace std;
int findElement(int arr[], int n){
    int leftMax[n];
    leftMax[0] = INT_MIN;
    for (int i = 1; i < n; i++)
        leftMax[i] = max(leftMax[i - 1], arr[i - 1]);
    int rightMin = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        if (leftMax[i] < arr[i] && rightMin > arr[i])
            return arr[i];
        rightMin = min(rightMin, arr[i]);
    }
    return 0;
}
int main()
{
    int size;
    cout<<"enter the size of array: \n";
    cin>>size;
    int array[size];
    cout<<"enter the element of array: \n";
    for (int  i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    cout<<"the array you have entered is:\n";
    for (int  i = 0; i < size; i++)
    {
        cout<<array[i]<<" \n";
    }
    cout << "that  element is " << findElement(array, size);
    return 0;
}