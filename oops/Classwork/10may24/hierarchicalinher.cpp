//Hierarchical Inheritance Program
#include<iostream>
using namespace std;

class Animal //Animal Class//Base Class
{
    public:
        void display1()
        {
            cout<<"\nAnimal Class";
        }
};

class Elephant:public Animal //Element Class
{
    public:
        void display2()
        {
            cout<<"\nElement Class";
        }
};

class Horse:public Animal //Horse class
{
    public:
        void display3()
        {
            cout<<"\nHorse class";
        }
};

class Cow:public Animal //Cow Class
{
    public:
        void display4()
        {
            cout<<"\nCow Class";
        }
};

int main()
{
    Animal a;
    Elephant e;
    Horse h;
    Cow c;

    a.display1();
    e.display2();
    e.display1();
    h.display3();
    h.display1();
    c.display4();
    c.display1();

    return 0;
}