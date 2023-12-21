//Implement a program that removes all occurrences of a specified character from a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    printf("Enter the String: ");
    scanf("%s",a);
    char rem;
    printf("Enter the charater to remove: ");
    scanf(" %c", &rem);   
    int i=0;
    while(a[i]!=rem && i<20)
        {
            printf("%c", a[i]);
            i++;
        }
    
}    