//Create a program to find the sum of elements in an array using pointers.
#include<stdio.h>
int main()
{
    int i,j, n, a[n][n],b[n][n],c[n][n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter number a%d%d",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
}