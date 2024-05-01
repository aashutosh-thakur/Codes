// Write a Program related to inheritance.
#include<iostream>
using namespace std;
class Perfect
{ 
    int num;
    int count=0;
    int j;
    int a[10];
    public:
        void get_num();
        void perfect_Num();
};
void Perfect::get_num()
{
    cout<<"Enter a number: ";
    cin>>num;
}
void Perfect::perfect_Num()
{
    int i;
    int sum=0;
    for(i=num-1;i>0;i--)
    {
        if(num%i==0)
        {
            a[count]=i;
            sum+=i;
            count++;
        }
    }
    if(sum==num)
    {
        cout<<num<<" is perfect number";
    }
    else{
        cout<<num<<" is not perfect number";
    }
}
int main()
{
    Perfect p;
    p.get_num();
    p.perfect_Num();
    return 0;
}