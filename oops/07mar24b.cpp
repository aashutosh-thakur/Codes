//Write a program to create class test having data members mark and spi.
//Create memeber function SetData() and DisplayData()
#include<iostream>
using namespace std;
class Test
{
    private:
       int mark;
       float spi;
    public:
       void SetData()
       {
        cout<<"Enter the mark: ";
        cin>>mark;
        cout<<"Enter the spi: ";
        cin>>spi;
       }
       void DisplayData()
       {
         cout<< "Mark = "<<mark<<endl;
         cout<< "spi = "<<spi<<endl;
       }
};
int main()
{
    Test o1,o2;
    o1.SetData();
    o1.DisplayData();
    o2.SetData();
    o2.DisplayData();
    return 0;
}