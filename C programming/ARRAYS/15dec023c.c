//Implement a program to merge two sorted arrays into a single sorted array.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n],b[n],c[n],s[n],p[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the value of a[%d]: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if (s[i]<a[i]);
        {
            s[i]=a[i];
        }
    }
    for(i=0;i<n;i++)
        {
           printf("%d",s[i]);
           printf("\n");
        }
        
    
    
    for(i=0;i<n;i++)
    {
        printf("Enter the value of b[%d]: ",i+1);
        scanf("%d",&b[i]);
    }
    {
        if (p[i]<b[i]);
        {
            p[i]=b[i];
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",p[i]);
    }
}