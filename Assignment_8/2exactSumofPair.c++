/*Q2 - Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
a pair in the array whose sum is exactly x.*/ \
#include <iostream>
#include <vector>
using namespace std;
bool exactSum(vector<int> vec1, int size,int target)
{
    bool flag = false;
    int i=0,j=size-1;
    while (j>i)
    {
        if (vec1[i]+vec1[j]==target)
        {
            flag =true;
            break;
        }
        else if (vec1[i] + vec1[j] >target)
        {
            j--;
        }
        else{
            i++;
        }  
    }
    return flag;
}
int main(int argc, char const *argv[])
{
    int size1,target;
    cout << "Enter the size of  Array/Vector::\n";
    cin >> size1;
    vector<int> myVec(size1);
    cout << "Enter the element of vector\n";
    for (int &ele : myVec)
    {
        cin >> ele;
    }
    cout<<"Enter the target element:\n";
    cin>>target;
    exactSum(myVec,size1,target)?cout<<"yes there exist pair:":cout<<"No such pair";
    return 0;
}
