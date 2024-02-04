//Write programs to manipulate arrays (sorting, searching, insertion, deletion).
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    int i,j=0,k,l,m;
    for(i=0;i<n;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(k=0;k<n;k++)
    {
        printf("b[%d]: ",k);
        scanf("%d",&b[k]);

    }
    for(l=0;l<n;l++)
    {
        if(a[l]<b[l])
        {
            c[l]=b[l];
        }
        else{
            if(b[l]<a[l])
            {
                c[l]=a[l];
            }
        }
    }
    for(m=0;m=2*n;m++)
    {
        printf("%d",c[m]);
    }
    // int Search;
    // printf("The number yoy want to search: ");
    // scanf("%d",&Search);
    
    // if(a[j]==Search)
    // {
    //     printf("Index Found");
    //     j++;
    // }
    // else{
    //     printf("Not found");
    // }

}