#include<iostream>
using namespace std;

class Time{
    int hour, minute, second;
    public:
    void getTime(){
        cout<<"\nEnter Hours: ";
        cin>>hour;
        cout<<"Enter Minutes: ";
        cin>>minute;
    }
    void printTime(){
        cout<<"\nHour: "<<hour;
        cout<<"\tMinute: "<<minute;
    }
    Time addTime(Time t1,Time t2){
        Time t4;
        t4.hour=t1.hour+t2.hour;
        t4.minute=t1.minute+t2.minute;
        return t4;
    }
};
int main()
{
    Time t1,t2,t4,ans;
    t1.getTime();
    t1.printTime();
    t2.getTime();
    t2.printTime();
    ans=t2.addTime(t1,t2);
    return 0;
}