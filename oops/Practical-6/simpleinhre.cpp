//Write a Simple Inhertance program.
#include<iostream>
using namespace std;
class University
{
    public:
        void display1()
        {
            cout<<"RRU\n";
        }
}; 
class School:public University
{
    public:
        void display2()
        {
            cout<<"SITAICS\nSISSP\nSISDSS\nSPES\nSISCCL";
        }
};
int main()
{
    University U;
    School s;
    
    s.display1();
    s.display2();

    return 0;
}