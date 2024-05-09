//basic to class type conversion
#include<iostream>
using namespace std;
class sample
{
    int a;
    public:
        sample(){}
        sample(int x){
            a=x;
        }
    void disp(){
        cout<<"The value of a: "<<a;
    }
};
int main()
{
    int m=10;
    sample s;
    s=m;
    s.disp();
    return 0;
}