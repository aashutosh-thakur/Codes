//Derived class constructor
#include<iostream>
using namespace std;
class Base
{
    int x;
    public:
        Base(int i)
        {
            x=i;
            cout<<"X= "<<x<<endl;
        }
};        
class Derived : public Base
{
    int y;
    public:
        Derived(int i, int j): Base(j)
        {
            y=i;
            cout<<"Y= "<<y;
        }
};
int main()
{
    Derived  d(10,20);
}