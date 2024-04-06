//Creating a menu for vegetable list with price
#include<iostream>
#include<string>
using namespace std;
#define maxsize 20
int push=-1,addition,maximum,vege[maxsize];
string veg[maxsize];
void add();
void sum();
void expensive();
void display();
int main()
{
    int n;
    start:
    cout<<"Press\n0-Exit\n1-Add(Item)\n2-Print(Total)\n3-Print(Expensive)\n4-Display\n";
    cin>>n;
    switch(n)
    {
        case 0:{
            break;
        }
        case 1:{
            add();
            goto start;
        }
        case 2:{
            sum();
            goto start;
        }
        case 3:{
            expensive();
            goto start;
        }
        case 4:{
            display();
            goto start;
        }
        default:{
            cout<<"Invalid enter!";
            goto start;
        }
    }
}
void add(){
    int i,n;
    string m;
    if(push==maxsize-1)
    {
        cout<<"Stack overflow";
    }
    else{
            cout<<"Enter the name and amount: ";
            cin>>m>>n;
            push++;
            veg[push]=m;
            vege[push]=n;
        }
}
void sum(){
    int i;
    addition=0;
    for(i=0;i<=push;i++)
    {
        addition=addition+vege[i];
    }
    cout<<"Total bill: "<<addition<<endl;
}
void expensive(){
    int i,k;
    maximum=0;
    for(i=0;i<=push;i++)
    {
        if(maximum<vege[i])
        {
            maximum=vege[i];
        }
    }
    for(k=0;k<=push;k++)
    {
        if(maximum==vege[k]){
            cout<<veg[k]<<"\t"<<vege[k]<<endl;
        }
    }
}
void display(){
    cout<<endl;
    for(int k=0;k<=push;k++)
    {
        cout<<veg[k]<<"\t"<<vege[k]<<endl;
    }
}