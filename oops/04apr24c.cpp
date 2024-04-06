//Write a cpp program to find area of triangle using friend function
#include<iostream>
using namespace std;
class triangle{
    int b,h;
    public:
        void setdata(int b,int h);
        friend void printdata(triangle);
};
void triangle::setdata(int base, int height){
    b=base;
    h=height;
}
void printdata(triangle T)
{
    float area=T.b*T.h*0.5;
    cout<<"Area of Triangle: "<<area;
}
int main(){
    triangle T1;
    T1.setdata(2,4);
    printdata(T1);
    return 0;
}