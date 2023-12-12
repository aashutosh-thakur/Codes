//Develop a program to check if a number is prime or not using a function.
#include<stdio.h>
int prime(int n);
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    prime(num);
}
int prime(int n)
{
    int flag=1;
    for (int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
        flag =0;
        }
    }
    if (flag)
    {
       printf("Prime Number");
    }
    else 
    {
        printf("false");
    }

}    