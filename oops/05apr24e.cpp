//Parameterized Constructors
#include<iostream>
using namespace std;

class demo
{
    int m,n;
    public:
        demo(int x, int y)
        {
            m=x;
            n=y;
            cout<<"Constructor called";
        }
};
int main(){
    demo A(4,5);
}
