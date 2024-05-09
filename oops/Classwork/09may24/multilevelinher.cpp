//Multilevel Inheritance Program
#include<iostream>
using namespace std;

class Person //base class
{
    public:
        void display1()
        {
            cout<<"\nPerson Class";
        }
};

class Student: public Person //Child Class
{
    public:
        void display2()
        {
            cout<<"\nStudent Class";
        }
};

class ITStudent: public Student //GrandChild class
{
    public:
        void display3()
        {
            cout<<"\nITStudent Class";
        }
};

int main()
{
    Person P;
    Student S;
    ITStudent i;
    P.display1();
    S.display2();
    S.display1();
    i.display3();
    i.display2();
    i.display1();
}