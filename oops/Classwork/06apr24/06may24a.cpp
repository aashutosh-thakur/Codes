#include<iostream>
using namespace std;
class Overload{
        int num1, num2, sum, sum2;
    public:
        Overload()
        {
            num1=0;
            num2=0;
        }
        Overload(int x, int y)
        {
            num1=x;
            num2=y;
        }
    void display()
    {
        cout<<"Sum of both the numbers= "<<"("<<sum<<", "<<sum2<<")"<<endl;
    }
    Overload operator +(Overload o) 
    {
        Overload total;
        total.sum = num1 + o.num1; 
        total.sum2=num2+o.num2;
        return total;
    }
};
int main() {
    Overload C1(4, 5);
    Overload C2(3, 8);
    Overload C3;
    C3 = C1 + C2; 
    C3.display(); 
}