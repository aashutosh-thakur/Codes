#include<stdio.h>
int main()
{
    int i, j, k, a[3][3], b[3][3], c[3][3];
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Enter a element a%d%d:-", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Enter a element b%d%d:-",i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }
    for (j=0; j<3; j++)
    {
        c[j][k]=0;
        for (k=0; k<3; k++)
        {
            c[j][k]=a[j][k]*b[k][j];
        }
    }
    for (i=0; i<3; i++)
    {
        for (k=0; k<3; k++)
        {
            printf("%d", c[i][j]);            
        }
    }
}