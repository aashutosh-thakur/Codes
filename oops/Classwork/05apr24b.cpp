#include<iostream>
using namespace std;
class student{
    int rollnum;
    char name[50];
    double fee;
    public:
        student(){
            cout<<"Enter the Roll Number: ";
            cin>>rollnum;
            cout<<"Enter the Name: ";
            cin>>name;
            cout<<"Enter the fee: ";
            cin>>fee;
        }
        void display() {
            cout<<endl<<rollnum<<"\t"<<name<<"\t"<<fee;
        }
};
int main()
{
    student s;
    s.display();
    return 0;
}