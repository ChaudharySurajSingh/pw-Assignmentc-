/*Q1 - Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the
two arrays into a single sorted array of size m+n.*/
#include<iostream>
#include<vector>
using namespace std;
void mergedVector(vector<int>vec1,int size,vector<int>vec2,int size1){
    vector<int>mergedvector;
    int i=0,j=0;
    while (size>i and size1>j)
    {
        if(vec1[i]<vec2[j]){
            mergedvector.push_back(vec1[i]);
            i++;
        }
        else
        {
            mergedvector.push_back(vec2[j]);
            j++;
        }
    }
    while (i<size)
    {
        mergedvector.push_back(vec1[i]);
        i++;
    }
    while (j < size1)
    {
        mergedvector.push_back(vec2[j]);
        j++;
    }
    for (int ele:mergedvector)
    {
        cout<<ele<<" ";
    }
    
}
int main(int argc, char const *argv[])
{
    int size1,size2;
    cout<<"Enter the size of frist Array/Vector::\n";
    cin>>size1;
    vector<int>myVec1(size1);
    cout<<"Enter the element of first vector\n";
    for (int &ele:myVec1)
    {
        cin>>ele;
    }
    cout << "Enter the size of frist Array/Vector::\n";
    cin >> size2;
    vector<int> myVec2(size2);
    cout << "Enter the element of first vector\n";
    for (int &ele : myVec2)
    {
        cin >> ele;
    }
    cout<<"merged vector is: \n";
    mergedVector(myVec1,size1,myVec2,size2);
    return 0;
}
