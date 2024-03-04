//Insertion and deletion from first
#include<stdio.h>

int insert();
int del();
int display();
int main()
{
    start:
    int n;
    printf("Press\n0.Exit\n1.Insert\n2.Delete\n3.Display\n");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
        {
            insert();
            goto start;
        }
        case 2:
        {
            del();
            goto start;
        }
        case 3:
        {
            display();
            goto start;
        }
        case 0:
        {
            break;
        }
        default:
        {
            printf("Enter a valid number");
            goto start;
        }
    }
}
int insert()
{
     
}