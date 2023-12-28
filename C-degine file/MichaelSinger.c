//Write a C program that will output this passage by Michael Singer. Make sure your output looks exactly as shown here (including spacing, line breaks, punctuation, and the title and author). Use Required Escape Sequence and ASCII Value.
#include<stdio.h>
int main()
{
    int i,j;
    char a, b, c;
    a=1;
    b=4;
    c=3;
    for(i=0;i<=12;i++)
    {
        printf(" %c %c %c",a,b,c);
    }
    printf("\n %c  ''If you are resisthing, you are feeding it. \t\t\t     %c",b,b);
    printf("\n %c  \tAny energy you fight, you are feeding it. \t\t\t     %c",c,c);
    printf("\n %c  \t\tIf you are pushing something away, \t\t\t     %c",a,a);
    printf("\n %c  \t\t\tYou are inviting it to stay.''by Michael Singer.     %c\n",b,b);
    for(i=0;i<=12;i++)
    {
        printf(" %c %c %c",a,b,c);
    }
}