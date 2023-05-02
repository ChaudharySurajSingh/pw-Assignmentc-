/*Q5 - Given a vector arr[] sorted in increasing order of n size and an integer x,
 find the number of unique pairs that exist in the array whose absolute sum is exactly x.*/ 
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int size,target;
    cout << "Enter the size of  Array/Vector::\n";
    cin >> size;
    vector<int> myVec(size);
    cout << "Enter the element of vector\n";
    for (int &ele : myVec)
    {
        cin >> ele;
    }
    cout<<"Enter the target value:\n";
    cin>>target;
    cout << "You have entered:\n";
    for (int ele : myVec)
    {
        cout << ele << " ";
    }
    cout <<"\nYour target value is: "<<target<< endl;
    int i = 0, j = size - 1,count=0;
    while (i < j)
    {
        if (myVec[i]+myVec[j]==target)
        {
            count++;
            i++;
            j--;
        }
        else if (myVec[i] + myVec[j] >target)
        {
           j--;
        }
        else
        {
            i++;
        }
        
    }
    cout<<"there are: "<<count<< " unique pairs that make your target value";
    return 0;
}