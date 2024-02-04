#include <stdio.h>

int main ()
{
    char ch;
    char *s;
    char sl[99];
    scanf("%c", &ch);
    printf("%c\n", ch);
    scanf("%s", s);
    printf("%s\n", s);
    scanf("% [^\n]s", sl);
    printf("%s\n", sl);

}