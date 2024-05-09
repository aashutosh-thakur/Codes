#include<iostream>
using namespace std;

void user(string Fname,string Lname)
{
    cout<<"The name of student: "<<Fname<<" "<<Lname<<endl;
    cout<<"The length of the Name: "<<Fname.length()+Lname.length()<<endl;
}
void user(long long enrollment)
{
    int count=0;
    cout<<"The enrollment number is: "<<enrollment<<endl;
    while (enrollment != 0)
    {
        count++;
        enrollment=enrollment/10;
    }
    cout<<"The length of enrollment: "<<count;
}
int main()
{
    string Fname, Lname;
    cout<<"Enter your First Name: ";
    cin>>Fname;
    cout<<"Enter your Last Name: ";
    cin>>Lname;
    long long enrollment;
    cout<<"Enter your Enrollment: ";
    cin>>enrollment;
    user(Fname, Lname);
    user(enrollment);
}