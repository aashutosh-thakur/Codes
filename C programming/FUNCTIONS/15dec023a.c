//Implement recursive functions for Fibonacci series, factorial, and any other suitable problem.
#include<stdio.h>
int fibo(int num);
int main()
{
    int n,a;
    printf("Enter a number: ");
    scanf("%d",&n);
    a=fibo(n);
    printf("Fibonacci of seiers is %d",a);
}
int fibo(int num)
{
    int n;
    n=fibo(num-1)+fibo(num-2);
    printf("Fibonacci of seiers is %d",n);
}