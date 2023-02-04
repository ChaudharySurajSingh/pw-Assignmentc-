/*Q6 - Write a C++ program to swap two numbers with the help of a third variable.*/ #include <iostream>
using namespace std;

int main()
{
    cout << "\n\n Swap two numbers :\n";
    cout << "-----------------------\n";
    int num1, num2 , temp;
    cout<<"please enter the first number:\n";
    cin>>num1;
    cout << "please enter the second number\n";
    cin >> num2;
    cout << " Before swapping the 1st number is : " << num1<< "\n";
    cout << " Before swapping the 2nd number is : " << num2 << "\n";
    temp = num2;
    num2 = num1;
    num1 = temp;
    cout << " After swapping the 1st number is : " << num1 << "\n";
    cout << " After swapping the 2nd number is : " << num2 << "\n";
}