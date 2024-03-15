//To reverse any value
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=1;i<=n;i++)
    {
        printf("Enter the value of a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("Here is the reversed ordered\n");
    for(int j=n;j>0;j--)
    {
        printf("%d\n",a[j]);
    }
}