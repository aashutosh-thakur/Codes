//Area of Rectangle
#include<iostream>
using namespace std;
class Area{
    private: 
        int length,breadth;
    public:
        Area(){
            length=5;
            breadth=2;
        }
        void Calculate(){
            cout<<"\nArea: "<<length*breadth;
        }
};
int main()
{
    Area A1;
    A1.Calculate();

    Area A2;
    A2.Calculate();

    return 0;
}