//write a C program to find a approximate age of a student when student name, dob, and current date is given by user using structure
#include<stdio.h>
struct age
{
    char name[20];
    int dob;
    int cd;
    int curage;
};
int main()
{
    struct age info;
    printf("Enter name : ");
    scanf("%s",info.name);
    printf("Enter Date of birth mm/dd/yy: ");
    scanf("%d %d %d",&info.dob,&info.dob,&info.dob);
    printf("Enter Current Date mm/dd/yy:");
    scanf("%d %d %d", &info.cd,&info.cd,&info.cd);
    info.curage = info.cd-info.dob;
    printf("%d is the age",info.curage);
}