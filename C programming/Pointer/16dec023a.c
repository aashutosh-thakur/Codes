//Create a program to find the sum of elements in an array using pointers.
#include<stdio.h>
int main()
{
    int n,i,*ptr1,*ptr2,sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the value of a[%d]: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Enter the value of b[%d]: ",i+1);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        ptr1=&a[i];
        ptr2=&b[i];
        sum=sum+(*ptr1+*ptr2);
    }
    printf("\nSum of the array is %d",sum);
}