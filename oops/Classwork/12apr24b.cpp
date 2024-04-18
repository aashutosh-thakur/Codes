//Create a C++ class called Student with private data members name, rollNumber, and grade. Implement public member functions setData() to set the data members, displayData() to display the data members, and calculateGrade() to calculate the grade based on marks obtained. Ensure that name and rollNumber are private while grade is public.
#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
        string name;
        int rollNumber;
    public:
        char grade;
        void calculateGrade(int marks){
            if (marks>=90)
            {
                grade='A';
            }else if(marks>=80)
            {
                grade='B';
            }else if(marks>=70)
            {
                grade='C';
            }else if(marks>=60)
            {
                grade='D';
            }else{
                grade='F';
            }
        }
    void setData(string n,int roll)
        {
            name = n;
            rollNumber=roll;
        }
    void displayData()
    {
        cout<<"Name: "<<name<<"\tRollNumber: "<<rollNumber<<"\tGrade: "<<grade<<endl;
    }    
};
int main()
{
    Student s;
    s.setData("John",101);
    s.calculateGrade(85);
    s.displayData();
    return 0;
}
