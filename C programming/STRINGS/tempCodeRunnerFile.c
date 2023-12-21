//Implement a program that removes all occurrences of a specified character from a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    printf("Enter the character: ");
    scanf("%s",a);
    char rem;
    printf("Enter the charater to remove: ");
    scanf(" %c ", &rem);   
    int i;
    for(i=0;i<strlen(a);i++)
    {
        if(rem==a[i])
        {
            printf(" ");
        }
        else
        {
            printf("%s",a);
        }
    }
}    