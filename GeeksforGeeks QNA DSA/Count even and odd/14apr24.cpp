//Count number of even and odd elements in an array
#include<iostream>
using namespace std;
int count_even=0, count_odd=0;
void counteven(int array1[],int num);
void countodd(int array2[],int num1);
int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    for(int i=1;i<=size;i++)
    {
        cout<<"Enter the element at "<<i<<": ";
        cin>>arr[i];
    }
    start:
    int choice;
    cout<<"1-Count odd\n2-Count even\n3-Exit\n";
    cin>>choice;
    switch(choice)
    {
        case 1:{
            countodd(arr,size);
            goto start;
        }
        case 2:{
            counteven(arr,size);
            goto start;
        }
        case 3:{
            break;
        }
        default:{
            cout<<"Invalid input!\n";
            goto start;
        }
    }
}
void counteven(int array1[],int num){
    for(int j=1;j<=num;j++)
    {
        if(array1[j]%2==0)
        {
            count_even++;
        }
    }
    cout<<"Total Even number in array is: "<<count_even<<endl;
}
void countodd(int array2[],int num1)
{
    for(int k=1;k<=num1;k++)
    {
        if(array2[k]%2==1)
        {
            count_odd++;
        }
    }
    cout<<"Total odd number in array is: "<<count_odd<<endl;
}