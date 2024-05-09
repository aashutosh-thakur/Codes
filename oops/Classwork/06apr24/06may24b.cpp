#include<iostream>
using namespace std;
class sum{
    int num1,num2;
    public:
        void setdata(int num1,int num2);
        friend void total(sum);
};
void sum::setdata(int a,int b)
{
    num1=a;
    num2=b;
}
void total(sum s)
{
    int total=s.num1+s.num2;
    cout<<"Total sum: "<<total;
}
int main()
{
    sum s1;
    s1.setdata(4,5);
    total(s1);
    return 0;
}