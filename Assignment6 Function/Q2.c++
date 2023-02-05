/*Q2 - Given radius of a Circum. Write a function to print the area and circumference of the Circum.*/
#include<iostream> 
using namespace std;
double circumference(int rad){
    int Circum = 2*3.14*rad;
    return Circum;
}
double area(int rad)
{
    int Area = 3.14*rad*rad;
    return Area;
}
int main(int argc, char const *argv[])
{
    int radious;
    cout<<"enter the radious of the circum:";
    cin>>radious;
    cout<<"circumference is: "<<circumference(radious)<<"\narea of the circum is: "<<area(radious);
    return 0;
}
