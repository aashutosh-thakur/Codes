//Hybrid Inheritance Program
#include<iostream>
using namespace std;

class Car //Car Class //Base Class
{
    public:
        void display1()
        {
            cout<<"\nCar Class";
        }
};
class FuelCar:public Car //Fuel Car
{
    public:
        void display2()
        {
            cout<<"\nFuel Car";
        }
};
class ElecCar:public Car //Electric Car
{
    public:
        void display3()
        {
            cout<<"\nElectric Car";
        }
};
class HybridCar:public FuelCar, public ElecCar //Hybrid Car
{
    public:
        void display4()
        {
            cout<<"\nHybrid Car";
        }
};
int main()
{
    Car c;
    FuelCar f;
    ElecCar e;
    HybridCar h;

    h.display4();
    h.display3();
    h.display2();
}