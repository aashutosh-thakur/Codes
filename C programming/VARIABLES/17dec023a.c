//Experiment with typecasting in C.
#include<stdio.h>
int main()
{
    int a,b,c;
    float division;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    printf("Enter a number: ");
    scanf("%d",&c);
    division = (a+b)/c;
    printf("%.3f",division);
    division = (float)  (a+b)/c;
    printf("\n%.3f",division);
}