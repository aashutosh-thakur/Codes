// Write a C++ program to enter an element in an array and display it. 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    int i,j;
    for(i=1;i<=n;i++)
    {
        cout<<"Enter the element for "<<i<<": ";
        cin>>a[i];
    }
    for(j=1;j<=n;j++)
    {
        cout<<"Element at "<<j<<":"<<a[j]<<endl;
    }


}