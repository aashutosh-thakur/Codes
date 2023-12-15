//Implement programs to find the sum, average, maximum, and minimum values in an array.
#include<stdio.h>
int main()
{
    int n,i,sum=0,average,max=0,min;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the value of a[%d]: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if (max<=a[i])
        {
            max=a[i];
        }
    }
    printf("Maximum value is %d",max);
    for(i=0;i<n;i++)
    {
        if (min>=a[i])
        {
            min=a[i];
        }
    }
    printf("\nMinimum value is %d",min);
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        average=sum/n;
    }
    printf("\nSum of above value is %d",sum);
    printf("\nSum of above value is %d",average);
}