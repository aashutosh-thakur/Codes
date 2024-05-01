#include<iostream>
using namespace std;
void arry(int arr[][100],int s)
{
    int i;
    for(i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter the size of a"<<i<<j<<": ";
            cin>>a[i][j];
        }
    }
    arry(a,n);
}