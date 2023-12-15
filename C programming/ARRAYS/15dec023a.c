//Write a program to find the second largest element in an array.
#include<stdio.h>
int main()
{
    int n,i,max=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int sl[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the value of sl[%d]: ",i+1);
        scanf("%d",&sl[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Value of sl[%d] array are %d\n",i+1, sl[i]);
    }
    for ( i=0; i<n; i++)
    {
        if (max<=sl[i])
        {
            max=sl[i];
        }
    }
    printf("Maximum value of array is %d",max);
}