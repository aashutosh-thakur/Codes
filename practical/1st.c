//  Write a C program to check if the entered number is prime or not by using types of user-defined functions with all bellow four techniques. (4 different programs)
// 1.       No arguments passed and no return value.
// 2.       No arguments passed but a return value.
// 3.       Argument passed but no return value.
// 4.       Argument passed and a return value.
#include<stdio.h>
int function(int prime);
int main()
{
    int num,i=1;
    printf("Enter the number");
    scanf("%d",&num);
    int a = function(num)
}
int function(int prime)
{
    
    if(num % i == 1)
        {
            printf("It is prime");
        }
        else{
            printf("Its not prime");
        }
}



int main()
{
    int num,i=1;
    printf("Enter the number");
    scanf("%d",&num);
    if(num % i == 1)
        {
            printf("1");
        }
        else{
            printf("0");
        }
    return 0;
}

int main()
{
    int num,i;
    printf("Enter the number");
    scanf("%d",&num);
    do{
        num % i==1;
    }while(i=1);
    return 0;
}

int main()
{
    int num,i=1;
    printf("Enter the number");
    scanf("%d",&num);
    do{
        if(num % i==1)
        {
            printf("1");
        }
        else{
            printf("0");
        }
    }while(i=1);
    return 0;
}