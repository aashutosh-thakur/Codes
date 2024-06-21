//Create a class student having private members marks, name and public members rollno, getdata(), printdata(). Demonstrate concept of pointer to class members for array of 3 objects.
#include<iostream>
using namespace std;
class student
{
    int marks;
    string name;
    public:
        int roll_num;
        void getdata(int mar,string nam,int roll)
        {
            mar=marks;
            nam=name;
            roll=roll_num;
        }
        void printdata()
        {
            
        }
};
int main()
{

    return 0;
}