//Create a class student that stores roll_no, name. Create a class test that stores marks obtained in five subjects. Class result derived from student and test contains the total marks and percentage obtained in test. Input and display information of a student.
#include<iostream>
using namespace std;

class Student
{
    int roll_num;
    string name;
    public:
        void getdata(int rn,string nam)
        {
            roll_num=rn;
            name=nam;
        }
        void display()
        {
            cout<<"Roll Number= "<<roll_num<<"\n";
            cout<<"Name= "<<name<<"\n";
        }
};
class Test:public Student
{
    int mark1,mark2,mark3,mark4,mark5;
    public:
        void getmark(double a,double b,double c,double d,double e)
        {
            mark1=a;
            mark2=b;
            mark3=c;
            mark4=d;
            mark5=e;
        }
        void display1()
        {
            cout<<"Mark obtained: "<<mark1<<"\t"<<mark2<<"\t"<<mark3<<"\t"<<mark4<<"\t"<<mark5<<"\n";
            cout<<"Total mark= "<<mark1+mark2+mark3+mark4+mark5<<"\n";
            float t= mark1+mark2+mark3+mark4+mark5;
            cout<<"Percentage= "<<t/5;
        }
};
int main()
{
    Student s;
    Test t;

    int num;
    string name1;
    cout<<"Enter your Roll Number: ";
    cin>>num;
    cout<<"Enter your Name: ";
    cin>>name1;

    s.getdata(num, name1);
    t.getmark(73,83,71,66,60.5);
    s.display();
   // t.display();
    t.display1();
    
}