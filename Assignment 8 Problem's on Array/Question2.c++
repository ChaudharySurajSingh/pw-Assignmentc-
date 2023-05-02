/*​There is a man going on a trek. The trek consists of n + 1 points at different altitudes. The
man starts his trek on point 0 with altitude equal 0. You are given an integer array height
of length n where height[i] is the net height in altitude between points i​ and i + 1 for all
(0 <= i < n). Return the highest altitude of a point.*/
#include <iostream>
#include <vector>
using namespace std;
int highestAltitude(vector<int> &height)
{
    int currentAltitude = 0;
    int highestAltitude = 0;
for (int h : height)
    {
        currentAltitude += h;
        highestAltitude = max(highestAltitude, currentAltitude);
    }
    return highestAltitude;
}
int main(int argc, char const *argv[])
{
    int size;
    cout<<"Enter the number of altitude's point:\n";
    cin>>size;
    vector<int> hightVec(size+1,0);
    cout << "Enter the point's of hight of altitude:\n";
    for (int i = 1; i < hightVec.size(); i++)
    {
        cin >> hightVec[i];
    }
    cout << "you have entered:\n";
    for (int i = 1; i < hightVec.size(); i++)
    {
        cout << hightVec[i] << " ";
    }
    cout<<endl;
    cout<<"the highest altitude of a point is:: "<<highestAltitude(hightVec);

    return 0;
}