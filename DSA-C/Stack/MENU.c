#include<stdio.h>
#define maxsize 5
int push();
int pop();
int display();
int stack[maxsize],top=-1;
int main()
{
    int choice;
    start:
    printf("1.push\n2.pop\n3.display\n4.exit");
    printf("\nChoose a number: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        push();
        goto start;
        case 2:
        pop();
        goto start;
        case 3:
        display();
        goto start;
        default:
        printf("Enter a valid number");
        goto start;
    }
}
int push()
{
    int n,i;
    if(top==maxsize-1)
    {
        printf("Stack is overflow\n");
    }
    else{
        printf("enter an element: ");
        scanf("%d",&n);
        top++;
        stack[top]=n;
    }
}
int pop()
{
    int n;
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else{ 
        n=stack[top];
        top--;
        printf("poped element: %d\n",n);  
    }
}
int display()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else{
        for(int i=top;i>=0;i--)
        {
        printf("%d\n",stack[i]);
        }
    }
}