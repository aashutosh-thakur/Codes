//Write a C++ program to Store and Display Employee Information.
#include<iostream>
using namespace std;
class   Employee
{
    int iD;
    int number;
    string name;
    public:
        void getData()
        {
            cout<<"\nEnter the name: ";cin>>name;
            cout<<"\nEnter the Phone Number: ";cin>>number;
            cout<<"\nEnter the ID: ";cin>>iD;
        }
        void printData()
        {
            cout<<"\nEmplolyee Name: "<<name;
            cout<<"\nEmplolyee Phone Number: "<<number;
            cout<<"\nEmplolyee ID: "<<iD;
        }
};
int main()
{
    Employee e1,e2;
    e1.getData();
    e2.getData();
    e1.printData();
    e2.printData();
}