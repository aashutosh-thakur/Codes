//Overloading Unary operator -- data member value--.
#include<iostream>
using namespace std;
class Decrement{
    int x,y,z;
    public:
        Decrement()
        {
            x=y=z=0;
        }
        Decrement(int a, int b, int c)
        {
            x=a;y=b;z=c;
        }
        void display()
        {
            cout<<"x="<<x<<",y="<<y<<",z="<<z<<endl;
        }
        void operator--();
};
void Decrement::operator--()
{
    x=--x;
    y=--y;
    z=--z;
}
int main()
{
    Decrement s1(5,4,3);
    s1.display();
    --s1;
    s1.display();
    return 0;
} 