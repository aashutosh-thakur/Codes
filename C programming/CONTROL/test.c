#include<stdio.h>
int main() 
{
    int i, j, n, k;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = n - 1; i >= 1; i--) 
    {
        for (j = 1; j <= n - i; j++) 
        {
            printf(" ");
        }
        for (j = 1; j <=2*i-1; j++) 
        {
            printf("*");
        }
        printf("\n");
    } 
}