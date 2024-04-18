//Develop a C++ application for tracking expenses, income, and budgeting.
#include<iostream>
using namespace std;
#define maxsize 10
int income=0,i;
int shop[maxsize],top=-1,sum=0,save;
string name[maxsize];
void inCome();
void spending();
void saving();
void display();
void buy();
void maina();
int main()
{
    int choice;
    start:
    cout<<"0-exit\n1-income\n2-spending\n3-saving\n4-display\n5-shopping\n";
    cin>>choice;
    switch(choice)
    {
        case 0:{
            break;
        }
        case 1:{
            inCome();
            goto start;
        }
        case 2:{
            spending();
            goto start;
        }
        case 3:{
            saving();
            goto start;
        }
        case 4:{
            display();
            goto start;
        }
        case 5:{
            buy();
            goto start;
        }
        default:{
            cout<<"Ivalid choice! Please enter it again: ";
            goto start;
        }
    }
}
void inCome()
{
    cout<<"Enter your income: ";
    cin>>income;
    save=income;
}
void spending()
{
    sum=0;
    if(top==-1)
    {
        cout<<"No spending!"<<endl;
    }
    else{
        for(i=0;i<=top;i++)
        {
            sum=shop[i]+sum;
        }
    }
    cout<<"Spend: "<<sum<<endl; 
}
void saving()
{
    
    if(top==-1)
    {
        cout<<"You have saved your whole income till date!"<<endl;
    }
    else{
        
        save=income-sum;
        cout<<"Saving: "<<save<<endl;
    }
}
void display(){
    if(top==-1)
    {
        cout<<"Nothing to diplay!"<<endl;
    }
    else{
        for(int k=0;k<=top;k++)
        {
            cout<<"Used in: "<<name[k]<<"   "<<"Price: "<<shop[k]<<endl;
        }
    }
}
void buy()
{
    maina();
    string x;
    int y;
    if(top==maxsize-1)
    {
        cout<<"Monthly limit exceed!"<<endl;
    }
    else if(income<=0)
    {
        inCome();
        goto help;
    }
    else if(save<=0)
    {
        cout<<"No saving!";
    }
    else{
        help:
        cout<<"Enter name to buy: ";
        cin>>x;
        cout<<"Price: ";
        cin>>y;
        if(y>save)
        {
            cout<<"Out of your budget"<<endl;
        }
        else{
            top=top+1;
            name[top]=x;
            shop[top]=y;
        }
    }
}
void maina()
{
    for(int j=0;j<=top;j++)
        {
            sum=shop[j]+sum;
        }
    save=income-sum;
}