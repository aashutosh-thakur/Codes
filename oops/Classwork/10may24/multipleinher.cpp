//Multiple Inheritance Program
#include<iostream>
using namespace std;

//Base class//Liquid class
class Liquid
{
    public:
        void display()
        {
            cout<<"\nLiquid class";
        }
};

class Fuel //Fuel class
{
    public:
        void display2()
        {
            cout<<"\nFuel class";
        }
};

class Petrol:public Liquid,public Fuel //Petrol class
{
    public:
        void display3()
        {
            cout<<"\nPetrol class";
        }
};

int main()
{
    Liquid l;
    Fuel f;
    Petrol p;

    l.display();
    f.display2();
    p.display3();
    p.display2();
    p.display();

    return 0;
}