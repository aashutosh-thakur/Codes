// Write a C++ program to do the following operations: 
// 1. Deposit 
// 2. Withdrawal 
// 3. Display 
// 4. Exit 
#include<iostream>
using namespace std;
int add;
int withdrawa;

int deposite();
int withdrawal();
int display();
int main()
{
    int n;
    start:
    cout<<"0-exit\n1-deposit\n2-withdrawal\n3-display\n";
    cin>>n;
    switch(n)
    {
        case 0:
        {
            break;
        }
        case 1: 
        {
            deposite();
            goto start;
        }
        case 2:
        {
            withdrawal();
            goto start;
        }
        case 3:
        {
            display();
            goto start;
        }
        default:{
            cout<<"Invalid Input";
            goto start;
        }
    }
}
int deposite(){
    int n;
    cout<<"Enter the amount: ";
    cin>>n;
    add=n+add;
}
int withdrawal(){
    int n;
    cout<<"Enter the amount to withdraw: ";
    cin>>n;
    withdrawa=n+withdrawa;
}
int display()
{
    double rem=add-withdrawa;
    if(rem<=0)
    {
        cout<<"Empty Account";
    }
    else{
        cout<<"Remaining amount: "<<rem<<endl;
    }
    
}