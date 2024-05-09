
#include<iostream>
using namespace std;
class Test
{
    private:
       char company[20];
       int top_speed;
    public:
       void SetData()
       {
        cout<<"Enter company: ";
        cin>>company;
        cout<<"Enter top_speed: ";
        cin>>top_speed;
       }
       void DisplayData()
       {
         cout<< "Car Company = "<<company<<endl;
         cout<< "Top Speed = "<<top_speed<<endl;
       }
};
int main()
{
    Test o1,o2;
    o1.SetData();
    o2.SetData();
    o1.DisplayData();
    o2.DisplayData();
    return 0;
}