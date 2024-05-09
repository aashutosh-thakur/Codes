//Single Inheritance Program 
#include<iostream>
using namespace std;

class Animal   //base class
{
    int legs=3;
    public:
        void display1(){
            cout<<"legs= "<<legs;
        }
};

class Dog: public Animal{ //child class
    bool tail=true; //bool true=1 and false =0
    public:
        void display2()
        {
            cout<<"\ntail= "<<tail;
        }
};
int main()
{
    Animal a1;
    Dog d1;
    d1.display1();
    d1.display2();
    return 0;
}