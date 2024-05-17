//Derived class constructor
#include<iostream>
using namespace std;
class Base
{
    int x;
    public:
        Base(){cout<<"Base Default Constructor\n";}
};
class Derived : public Base
{
    int y;
    public:
        Derived(){cout<<"Derived Default Constructor\n";}
        Derived(int i){cout<<"Derived Parameterized Constructor\n";}
};
int main()
{
    Base b;
    Derived  d1;
    Derived d2(10);
    return 0;
}