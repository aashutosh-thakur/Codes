//
#include<iostream>
using namespace std;
class Box{
    private:
        static int length;
        static int breadth;
        static int height;
    public:
        static void print(){
            cout<<"Length: "<<length<<endl;
            cout<<"Breadth: "<<breadth<<endl;
            cout<<"Height: "<<height<<endl;
        }
};
int Box::length=10;
int Box::breadth=20;
int Box::height=30;
int main()
{
    cout<<"\nStatic member function called through class name: "<<endl;
    Box::print();
    return 0;
}