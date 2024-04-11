// Write a C++ program to check whether a number is odd or even.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%2==0)
    {
        cout<<n<<" is even";
    }
    else{
        cout<<n<<" is odd";
    }
}