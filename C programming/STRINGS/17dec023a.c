//Implement programs for string reversal.
#include<stdio.h>
#include<string.h>
int main()
{
    char character[15],i,temp;
    printf("Enter the Character : ");
    scanf("%s",character);
    int count=0;
    while (count[character] != '\0')
    {
        count++;
    }
    for(i=0;i<count-1;i++)
    {
        temp=character[i];
        character[i]=character[count-1];
        character[count-1]=temp;
        count--;
    }
    while (count!= 0)
    {
        printf("%s",character);
        count--;
        break;
    }
}