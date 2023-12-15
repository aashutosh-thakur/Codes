//Write a program to find the second largest element in an array.
#include<stdio.h>
int main()
{
    int n,i,max=0,max2=0;
    printf("Enter the array size");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the value of a[%d]: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nValue of a[%d]: %d",i+1,a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(max<=a[i])
        {
            max=a[i];
            for (i=0;i<max;i++)
            {
                if(max2<=a[i])
                {
                    max2=a[i];
                }
            }
            
        }
    }
    printf("\nSecond largest value is %d ",max2);
}