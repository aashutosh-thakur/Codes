//write a c program to display employee detail(name,ID,department) using structure.
#include<stdio.h>
struct employee
{
    char *name;
    int ID;
    char *department;
};
int main()
{
    struct employee info;
    strcpy(info.name,"Ram");
    info.ID=1234;
    strcpy(info.department,"CP");
    printf("%s",info.name);
    printf("\n%i",info.ID); 
    printf("\n%s",info.department);
}