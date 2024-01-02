//Implement a program to merge two sorted arrays into a single sorted array.
#include<stdio.h>
int main()
{
    int size,temp=0;
    printf("Enter the size: ");
    scanf("%d",&size);
    int i,j,a[size],b[size];
    for(i=0;i<size;i++)
    {
        printf("Value of a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("Value of b[%d]: ",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<size;i++)
    {
        a[size+i]=b[i];
    }
    for(i=0;i<size+size;i++)
    {
        printf("Value after merge: %d\n",a[i]);
    }
    for(i=0;i<size+size;i++)
    {
        for(j=i+1;j<size+size;j++)
        {
            if(a[i]>a[j])
            {
                temp= a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("Sorted value are: %d\n",a[i]); 
    }
}