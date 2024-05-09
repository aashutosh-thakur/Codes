#include<iostream>
using namespace std;
class Rectangle {
    private:
        double length;
        double width;
    public:
        Rectangle(double l=0 , double w=0):length(l),width(w) {}
        void setDimensions(double l, double w){
            length = l;
            width =w;
        }
        double area() const 
        {
            return length*width;
        }
};
int main()
{
    const int size = 3;
    Rectangle rectangle[size];
    rectangle[0].setDimensions(5.0,3.0);
    rectangle[1].setDimensions(4.0,4.0);
    rectangle[2].setDimensions(6.0,2.5);
    for(int i=0;i<size;++i)
    {
        cout<<"Rectangle"<<i+1<<"area: "<< rectangle[i].area() <<endl;        
    }
}