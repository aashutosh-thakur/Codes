//Write a C++ program to convert Celsius to Fahrenheit and Fahrenheit to Celsius. 
#include<iostream>
using namespace std;
int main()
{
    int c,f,n;
    cout<<"Press"<<endl<<"0- For exit"<<endl<<"1- For C to F"<<endl<<"2- For F to C"<<endl;
    cin>>n;
    switch(n)
    {
        case 0:
        {
            break;
        }
        case 1:
        {
            cout<<"Enter Celsius: ";
            cin>>c;
            f = (1.8 * c) + 32;
            cout<<"fahrenheit for "<<c<<" celsius is "<<f;
            break;
        }
        case 2:
        {
            cout<<"Enter Fahrenheit: ";
            cin>>f;
            c=(f-32)*1.8;
            cout<<"celsius for "<<c<<" fahrenheit is "<<f;
            break;
        }
    }
}