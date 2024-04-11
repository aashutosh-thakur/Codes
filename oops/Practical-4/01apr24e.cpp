//Wite a C++ program to perform 3x3 matrix multiplication. 
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l;
    int a[3][3],b[3][3];
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            cout<<"Enter the value of a"<<i<<j<<": ";
            cin>>a[i][j];
        }
    }
    for(k=1;k<4;k++)
    {
        for(l=1;l<4;l++)
        {
            cout<<"Enter the value of b"<<k<<l<<": ";
            cin>>b[k][l];
        }
    }
    
}