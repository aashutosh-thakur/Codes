//write a C program to find maximum and minimum from an array using single function.
#include<stdio.h>
int maximum(int c, int d[]);
int minimum(int c, int d[]);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a[n], i;
    for (i=0;i<n;i++)
    {
        printf("Enter the value of %d: " ,i);
        scanf("%d",&a[i]);
    }
    maximum(n, a);
    minimum(n, a);
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

int minimum(int c, int  d[])
{
    int i, mim;
    for (i=0; i<c; i++)
    {
        if (mim>=d[i])
        {
            mim=d[i];
        }
    }
    printf("Minimum value is %d\n", mim);
}