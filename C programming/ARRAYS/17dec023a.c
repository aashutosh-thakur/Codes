//Create a program to reverse the elements of an array.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the number of a[%d]: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("\nReverse order of a[%d] is :%d ",i,a[i]);

    }

}