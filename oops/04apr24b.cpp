//using friend function to print width
#include<iostream>
using namespace std;
class Box{
    double width;
    public:
        friend void printWidth(Box);
        void setWidth(double wid);
};
void Box::setWidth(double wid){
    width=wid;
}
void printWidth(Box b){
    cout<<"Width of box: "<<b.width;
}
int main()
{
    Box box;
    box.setWidth(10.0);
    printWidth(box);
    return 0;
}