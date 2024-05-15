//Write a overridding program 
#include<iostream>
using namespace std;
class ABC
{
    public:
        void display()
        {
            cout<<"This is parent class";
        }
};
class XYZ:public ABC
{
    public:
        void display()
        {
            cout<<"This is child class";
        }
};
int main()
{
    XYZ x;
    x.display();
    ABC a;
    a.display();

    return 0;
}