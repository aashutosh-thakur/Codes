//Write a program to convert a string to uppercase or lowercase.
#include <stdio.h>
#include <ctype.h>
void convertCase(char str[], int toUpper) 
{
    int i = 0;
    while (str[i] != '\0') 
    {
        if (toUpper) 
        {
            str[i] = toupper(str[i]);
        } else 
        {
            str[i] = tolower(str[i]);
        }
        i++;
    }
}
int main() {
    char str[100];
    int toUpper;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter 1 to convert to uppercase or 0 to convert to lowercase: ");
    scanf("%d", &toUpper);
    if (toUpper == 1 || toUpper == 0) 
    {
        convertCase(str, toUpper);
        printf("Converted string: %s\n", str);
    }
    return 0;
}
