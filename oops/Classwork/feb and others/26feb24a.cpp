#include<iostream>
using namespace std;
void divide(int num1, int num2);
void divide(double num1,double num2);
int main()
{
    int num1,num2;
    double num3,num4;
    cout<<"Enter the numbers: ";
    cin>>num1>>num2;
    cout<<"Enter the numbers: ";
    cin >>num3>>num4;
    divide(num1, num2);
    divide(num3, num4);
    
}
void divide(int num1, int num2)
{
    int Division;
    Division=num1/num2;
    cout<<"The output is: "<<Division<<endl;
}
void divide(double num3, double num4)
{
    double DivisionD;
    DivisionD=num3/num4;
    cout<<"The output is: "<<DivisionD;
}