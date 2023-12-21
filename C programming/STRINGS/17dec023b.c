//Write a program to count the number of vowels and consonants in a given string.
#include<stdio.h>
int main()
{
    char a,e,i,o,u,vow[5]={a,e,i,o,u},letter;
    printf("Enter alphabet to check: ");
    scanf("%s",letter);
    if(vow[5]==letter)
    {
        printf("%s is vowel",letter);
    }
    else{
        printf("%s is consonants",letter);
    }
}