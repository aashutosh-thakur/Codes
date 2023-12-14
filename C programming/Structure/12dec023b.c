//Create a program that stores employee information (name, ID, salary) and displays it using structures.
#include<stdio.h>
struct employee
{
    char name[10];
    int ID;
    int salary;
};
int main()
{
    struct employee info;
    strcpy(info.name, "Ram") ;
    info.ID=1234;
    info.salary=10000;
    printf("%s",info.name);
    printf("\n%d",info.ID);
    printf("\n%d",info.salary);

}