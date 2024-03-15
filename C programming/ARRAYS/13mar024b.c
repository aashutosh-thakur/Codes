//To print the duplicate value
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    int i,k,j;
    for(i=1;i<=n;i++)
    {
        printf("Enter the value of a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(k=1;k<=n;k++)
    {
        for(j=n;j>0;j--){
           if(a[k]==a[j]&&k!=j)
           {
                if(k<=j)
                {
                    break;
                }
                else
                {
                    printf("%d is duplicate\n",a[k]);
                    break;
                }
           }
        }
        
    }
}