#include<iostream>
using namespace std;
class base{
    public:
        void showbase()
        {
            cout<<"Base\n";
        }   
};
class derv1:public base{
    public:
        void showderived()
        {
            cout<<"Derv1\n";
        }
};
int main()
{
    derv1 dv1;
    base* ptr;
    ptr=&dv1;
    ptr->showbase();
    //ptr->showderived();//error
    ((derv1 *)ptr)->showderived();

    return 0;
}