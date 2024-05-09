//Create a class Rectangle having data members' length and width. Demonstrate default, parameterized and copy constructor to initialize members and also demonestrate construction overloading.

#include<iostream>
using namespace std;
class Rectangle{
    private:
        int length, width;
    public:
        Rectangle()
        {
            length=0;
            width=0;
            cout<<length<<"\t"<<width<<"\n";
        }
            Rectangle(int l, int w)
            {
                length=l;
                width=w;
                cout<<length<<"\t"<<width<<"\n";
            }
        Rectangle(Rectangle &_r)
        {

        }    
};

