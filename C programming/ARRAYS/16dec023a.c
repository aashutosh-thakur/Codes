//Write programs to manipulate arrays (sorting, searching, insertion, deletion).
#include<stdio.h>
int main()
{
    int n,i,ao=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("The value of a[%d]: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if (ao<=a[i])
        {
            ao=a[i];
        }
        printf("\nThe values are %d",ao);
    }
}