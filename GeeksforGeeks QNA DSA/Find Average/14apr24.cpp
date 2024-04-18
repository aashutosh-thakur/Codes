//Given an array, the task is to find average of that array. Average is the sum of array elements divided by the number of elements.
#include<iostream>
using namespace std;
int total=0,averagenum;
float averagenum1;
void sum(int array[], int num);
void average(int num);
void display(int num);
int main(){
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int arr[size];
    for(int i=1;i<=size;i++)
    {
        cout<<"Enter the element at postion "<<i<<": ";
        cin>>arr[i];
    }
    start:
    int choice;
    cout<<"1-sum\n2-average\n3-display\n4-exit\n";
    cin>>choice;
    switch(choice)
    {
        case 1:{
            sum(arr,size);
            goto start;
        }
        case 2:{
            average(size);
            goto start;
        }
        case 3:{
            display(size);
            goto start;
        }
        case 4:{
            break;
        }
        default:{
            cout<<"Invalid choice! Choose it again\n";
            goto start;
        }
    }
}
void sum(int array[], int num){
    for(int j=1;j<=num;j++)
    {
        total=total+array[j];
    }
    cout<<"Sum of array: "<<total<<endl;
}
void average(int num)
{
    if(total%num==0)
    {
        averagenum=total/num;
        cout<<"Average of array: "<<averagenum<<endl;
    }
    else
    {
        averagenum1=(float)total/num;
        cout<<"Average of array: "<<averagenum1<<endl;
    }
    
}
void display(int num){
    cout<<"Sum of array: "<<total;
    cout<<"\nSize of array: "<<num<<endl;
    if(total%num==0)
    {
        cout<<"Average of array: "<<averagenum<<endl;
    }
    else
    {
        cout<<"Average of array: "<<averagenum1<<endl;
    }
}