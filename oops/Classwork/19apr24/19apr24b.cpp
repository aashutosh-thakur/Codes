//class to basic type conversion
#include<iostream>
using namespace std;
class sample{
    float a;
    public:
        sample(){
            a=10.23;
        }
        operator int()
        {
            int x;
            x=a;
            return x;
        }
};
int main()
{
    sample s;
    int y=s;
    cout<<"The value of Y is: "<<y;
    return 0;
}