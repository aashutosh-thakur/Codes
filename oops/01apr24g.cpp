//Write a C++ program with class having time w.r.t to hour, minute, seconds
#include<iostream>
using namespace std;

class Time
{
    int hours, minutes, seconds;
    public:
    void getTime()
    {
        cout<<"\nEnter Hours: ";
        cin>>hours;
        cout<<"Enter Minutes: ";
        cin>>minutes;
        cout<<"Enter Seconds :";
        cin>>seconds;
    }
    void printTime()
    {
        cout<<"Entered time is: ";
        cout<<"\nHours: "<<hours<<"\nMinutes: "<<minutes<<"\nSeconds: "<<seconds;
    }
    void addTime(Time x, Time y)
    {
        hours=x.hours+y.hours;
        minutes=x.minutes+y.minutes;
        seconds=x.seconds+y.seconds;
    }
};
int main()
{
    Time t1,t2,t3;

    t1.getTime();
    t1.printTime();

    t2.getTime();
    t2.printTime();

    t3.addTime(t1,t2);
    cout<<"\nAfter addition: ";
    t3.printTime();
}