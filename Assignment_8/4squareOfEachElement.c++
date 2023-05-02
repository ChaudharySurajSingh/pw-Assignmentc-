/*Q4 - Given a vector arr[] sorted in increasing order. Return an array of squares of each
number sorted in increasing order. Where size of vector 1<size<101.*/
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the size of  Array/Vector::\n";
    cin >> size;
    vector<int> myVec(size);
    cout << "Enter the element of vector\n";
    for (int &ele : myVec)
    {
        cin >> ele;
    }
    cout<<"You have entered:\n";
    for (int ele:myVec)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    vector<int>square(size);
    int i=0,j=size-1,k=size-1;
    while (i<=j)
    {
       if (abs(myVec[i])>abs(myVec[j]))
       {
        square[k]=myVec[i]*myVec[i];
        i++;
        k--;
       }
       else
       {
        square[k] = myVec[j] * myVec[j];
        k--;
        j--;
       }
    }
    for (int ele:square)
    {
        cout<<ele<<" ";
    }
    return 0;
}