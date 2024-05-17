//Write a program using virtual
#include<iostream>
using namespace std;
class A
{
    public: 
        int i;
};
class B: virtual public A
{
    public:
        int j;
};
class C:virtual public A
{
    public:
        int k;
};
class D:public B, public C
{
    public:
        int sum; 
};
int main()
{
    D obj1;
    obj1.i=10;
    obj1.j=20;
    obj1.k=30;
    obj1.sum=obj1.i+obj1.j+obj1.k;
    cout<<"Sum= "<<obj1.sum;

    return 0;
}