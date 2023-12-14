//Write a function to find the maximum of three numbers.
#include<stdio.h>
int maximum(int c, int d[]);
int main()
{
    int n=3;
    int a[n], i;
    for (i=0;i<n;i++)
    {
        printf("Enter the value of %d: " ,i);
        scanf("%d",&a[i]);
    }
    maximum(n, a);
}
int maximum(int c, int d[])
{
    int i, max=0;
    for ( i=0; i<c; i++)
    {
        if (max<=d[i])
        {
            max=d[i];
        }
    }
    printf("Maximum value is %d\n", max);
}
