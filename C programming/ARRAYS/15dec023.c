#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[50], str2[50];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    strcat(str1, str2); 
    printf("Concatenated string: %s\n", str1);
    char source[50], destination[50];
    printf("Enter a source string: ");
    scanf("%s", source);
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
    char input_str[100];
    printf("Enter a string to find its length: ");
    scanf("%s", input_str);
    int length = strlen(input_str);
    printf("Length of the string '%s' is %d\n", input_str, length);
    return 0;
}
