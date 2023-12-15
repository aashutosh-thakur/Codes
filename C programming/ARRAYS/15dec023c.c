//Implement a program to merge two sorted arrays into a single sorted array.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n],b[n],c[n];
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
    printf("single shorted value");
    for(i=0;i<n;i++)
    {
        printf("\n%d\n%d",a[i],b[i]);
        c[n]+1;
    }
}