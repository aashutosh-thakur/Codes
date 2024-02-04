#include<stdio.h>
int main()
{
    int n, max=0,maxi=0;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=max)
        {
            if(maxi<a[i])
            {
                maxi=a[i];
            }
        }
    }
    printf("%d is second largest",maxi);
    
}