//Write a simple program using Friend Function
#include<iostream>
using namespace std;
class Add
{
    int num1,num2;
    public:
        void getdata(int x, int y)
        {
            num1=x;
            num2=y;
        }
        friend int display(Add);
};
int display(Add a)
{
    cout<<"Sum is equal to: "<<a.num1+a.num2;
}
int main()
{
    Add a;
    a.getdata(10,20);
    display(a);

    return 0;
}