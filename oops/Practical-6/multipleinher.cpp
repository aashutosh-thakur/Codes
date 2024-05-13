//write a multiple inheritance program where the base class will be basket and other will be fruits like apple, mango, banana.
#include<iostream>
using namespace std;
class Basket
{
    public:
        void display1()
        {
            cout<<"Following are the things in Basket: \n";
        }
}; 
class Mango:public Basket
{
    public:
        void display2()
        {
            cout<<"Mango\n";
        }
};
class Apple:public Basket
{
    public:
        void display3()
        {
            cout<<"Apple\n";
        }
};
class Banana:public Basket
{
    public:
        void display4()
        {
            cout<<"Banana";
        }
};
int main()
{
    Basket B;
    Mango m;
    Apple a;
    Banana b;
    
    B.display1();
    m.display2();
    a.display3();
    b.display4();

    return 0;
}