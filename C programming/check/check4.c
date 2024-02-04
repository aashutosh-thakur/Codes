#include <stdio.h>
#include <string.h>
int Anagrams(char *str1, char *str2)
{
    int count[60]={0}, length1= strlen (*str1), length2= strlen (*str2);
    if(length1!=length2)
    {
        return 0;
    }
    for (int i=0;i<length1;i++)
    {
        count[(int) str1[i]]++;
        count[(int) str2[i]]--;
    }
    for(int i=0;i<60;i++)
    {
        if(count!=0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str1[30],str2[30];
    scanf("%s",str1);
    scanf("%s",str2);
    if (Anagrams(str1,str2))
    {
        printf("Its Anagram");
    }
    else
    printf("Its not");
}