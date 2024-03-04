#include<stdio.h>
#define maxsize 5
int insert();
int delete1();
int display();
int queue[maxsize];
int rear=-1,front=0;
int main()
{
    int choice;
    start:
    printf("1.insert\n2.delete\n3.display\n4.exit");
    printf("\nChoose a number: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        insert();
        goto start;
        case 2:
        delete1();
        goto start;
        case 3:
        display();
        goto start;
        default:
        printf("Enter a valid number");
        goto start;
    }
}
int insert()
{
    int n;
    if(rear==maxsize-1)
    {
        printf("Queue is overflow\n");
    }
    else{
        printf("enter an element: ");
        scanf("%d",&n);
        rear++;
        queue[rear]=n;
    }
}
int delete1()
{
    int n;
    if(front>rear)
    {
        printf("Queue is empty\n");
    }
    else{ 
        n=queue[front];
        printf("deleted element: %d\n",n);  
        front++;
    }
}
int display()
{
    if(front>rear)
    {
        printf("Queue is empty\n");
    }
    else{
        for(int i=front;i<=rear;i++)
        {
        printf("%d\n",queue[i]);
        }
    }
}