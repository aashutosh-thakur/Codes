#include<stdio.h>
int main()
{
    int e=5, p, n1, n2, Sum, Product, Division, Substraction;
    printf("exit = 0\n Sum=1\n Product=2\n Division=3\n Sunstraction=4\n");
    scanf("%d", &p);
    printf(" Enter a number :");
    scanf("%d", &n1);
    printf(" Enter a number :");
    scanf("%d", &n2);
    switch(p)
    {
        case 1:
            Sum=n1+n2;
            {
                printf("%d", Sum);
            }
            break;
        case 2:
            Product=n1*n2;
            {
                printf("%d", Product);
            }
            break;
        case 3:
            Division=n1/n2;
            {
                printf("%d", Division);
            }
            break;
        case 4:
            Substraction=n1-n2;
            {
                printf("%d", Substraction);
            }
            break;
    }
    return 0;
}
