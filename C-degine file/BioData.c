//Write your bio-data using Escape Sequences. And you have to take your Basic
// Information as user input. It should contain the following content. It should contain
// the following content.
#include<stdio.h>
int main()
{
    int n,i,j,k;
    for(i=0;i<=9;i++)
    {
        printf("#");
        for(j=0;j<6;j++)
        {
            printf("=");
        }
    }
    printf("#\n");
    printf("\t\t\t\tBIO-DATA\n");
    for(i=0;i<=9;i++)
    {
        printf("#");
        for(j=0;j<6;j++)
        {
            printf("=");
        }
    }
    printf("#\n");
    printf("\t\t\t    Basic Information\n");
    printf("\t\t\t    -----------------\n");
    printf("\t\t\t  Name:         XYZ\n\t\t\t  Address:      XYZ\n\t\t\t  Mobile Number:12345\n\t\t\t  Gender:       M/F\n\t\t\t  Date of Birth:DD/MM/YYYY");
    printf("\n\n\t\t\t  Education Qualification\n");
    printf("\t\t\t  -----------------------\n");
    printf("\n\t\t       *SSC      ->  Name of school    ->Passing Year\n\t\t\t''Percentage''\n");
    printf("\n\t\t       *HSC      ->  Name of school    ->Passing Year\n\t\t\t''Percentage''\n");
    printf("\n\n\t\t\t  Other Information\n");
    printf("\t\t\t  -----------------\n");
    printf("\t\t\t  Technical Skill: 'Java','C','C++'\n\t\t\t  Hobbies:         ABC,XYZ\n");
    for(i=0;i<=9;i++)
    {
        printf("#");
        for(j=0;j<6;j++)
        {
            printf("=");
        }
    }
    printf("#\n");
    printf("\t\t\t\tThank You\n");
    for(i=0;i<=9;i++)
    {
        printf("#");
        for(j=0;j<6;j++)
        {
            printf("=");
        }
    }
    printf("#\n");
}