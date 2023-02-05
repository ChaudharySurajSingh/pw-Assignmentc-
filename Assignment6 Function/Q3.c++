/*Q3 - Given the age of a person, write a function to check if the person is eligible to vote or not*/
#include<iostream>
using namespace std;
bool vote (int age){
    if (age>=18)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main(int argc, char const *argv[])
{
    int age;
    cout<<"please enter your age::";
    cin>>age;
    if (vote(age)==true)
    {
        cout<<"yes you can vote";
    }
    else
    {
        cout<<"you can't vote";
    }
    return 0;
}
