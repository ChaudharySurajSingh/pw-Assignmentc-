/*Q3 - ​Given an integer array arr consisting of 0’s and 1’s only, return the max length of
sequence which contains equal numbers of 0 and 1.*/
#include <iostream>
#include <vector>
using namespace std;
int maxLength(vector<int> hightVec){
    int ans = 0;
    int height = 0;
    for (int i = 0; i < hightVec.size(); i++)
    {
        height += hightVec[i];
        if (ans != height)
        {
            ans = height;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the number of input:\n";
    cin >> size;
    vector<int> hightVec(size);
    cout << "Enter the input only 0's and 1's:\n";
    for (int i = 0; i < hightVec.size(); i++)
    {
        cin >> hightVec[i];
    }
    cout << "you have entered:\n";
    for (int i = 0; i < hightVec.size(); i++)
    {
        cout << hightVec[i] << " ";
    }
    cout << endl;
    cout<<maxLength(hightVec);
    return 0;
}