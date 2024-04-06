//Using Friend function to perform addition
#include<iostream>
using namespace std;
class numbers{
    int num1, num2;
    public:
        void setdata(int a, int b);
    friend int add(numbers N);    
};
void numbers:: setdata(int a, int b)
{
    num1=a;
    num2=b;
}
int add(numbers N)
{
    return (N.num1+N.num2);
}
int main()
{
    numbers N1;
    N1.setdata(10,20);
    cout<<"Sum= "<<add(N1);
    return 0;
}