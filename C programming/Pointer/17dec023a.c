//Write programs to demonstrate the usage of pointers (pointer arithmetic, passing pointers to functions).
#include<stdio.h>
int main()
{
    int a,b,*ptr,*p,sum,s;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    ptr=&a;
    p=&a;
    sum=a+b;
    s= (*ptr + *p);
    printf("%d",sum);//simple calculation
    printf("\n%d",s);//addition of pointer
    printf("\n%d",*ptr);//value of a
    printf("\n%d",ptr);//adress of a

}