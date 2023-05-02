/*Q1 - Given an integer array and two integers L and R. Find the sum of elements between the index L and index R.
Note: Both L and R inclusive.*/
#include<iostream>
#include <vector>
    using namespace std;
int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the size of vector::\t";
    cin >> size;
    vector<int> myVec(size + 1, 0);
    cout << "Enter the element of the vector\n";
    for (int i = 1; i < myVec.size(); i++)
    {
        cin >> myVec[i];
    }
    cout << "you have entered:\n";
    for (int i = 1; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }
    cout << endl;
    for (int i = 1; i <= myVec.size(); i++)
    {
        myVec[i] += myVec[i - 1];
    }
    cout << "Enter your Queries:\n";
    do
    {
        int l, r, ans = 0;
        cout << "enter intial indeces::\t";
        cin >> l;
        cout << "Enter final indeces::\t";
        cin >> r;
        ans = myVec[r] - myVec[l - 1]; // we include both those indeces which provided by the user
        cout << "the Sum of element between " << l << " and " << r << " is:: " << ans << endl;
    } while (true);
    return 0;
}