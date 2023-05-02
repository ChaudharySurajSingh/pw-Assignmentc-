/*Q6 - Given a vector array myVec, print the count of triplets [myVec[i], myVec[j], myVec[k]] such
 that i != j, i != k, and j != k, and myVec[i] + myVec[j] + myVec[k] == target. Where k is an integer
 given by the user.
 Note: The solution set must not contain duplicate triplets and should not have 3 loops.*/ \
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int size, target,count=0;
    cout << "Enter the size of  Array/Vector::\n";
    cin >> size;
    vector<int> myVec(size);
    cout << "Enter the element of vector\n";
    for (int &ele : myVec)
    {
        cin >> ele;
    }
    cout << "Enter the target value:\n";
    cin >> target;
    cout << "You have entered:\n";
    for (int ele : myVec)
    {
        cout << ele << " ";
    }
    cout << "\nYour target value is: " << target << endl;
    sort(myVec.begin(), myVec.end());
    for (int i = 0; i < myVec.size() - 2; i++)
    {
        int leftPtr = i+1,rightPtr = myVec.size()-1;
        while (leftPtr<rightPtr)
        {
            if (myVec[i] + myVec[leftPtr] + myVec[rightPtr] == target)
            {
                count++;
                leftPtr++;
                rightPtr--;
            }
            else if (myVec[i] + myVec[leftPtr] + myVec[rightPtr]> target)
            {
                rightPtr--;
            }
            else
            {
                leftPtr++;
            }          
        }
        
    }
        cout << "there are: " << count << " unique pairs that make your target value";
        return 0;
}
