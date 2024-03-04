//Insertion and deletion from first
#include<stdio.h>
#define maxsize 5
int insert();
int delete1();
int display();
int queue[maxsize];
int rear=-1, front=-1;
int main()
{
    int choose;
    start:
    printf("\nPress\n0.Exit\n1.Insert\n2.Delete\n3.Display\n");
    scanf("%d",&choose);
    switch(choose)
    {
        case 1:
        {
            insert();
            goto start;
        }
        case 2:
        {
            delete1();
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
    int a;
    
    if((front==0&&rear==maxsize-1)||(front==rear+1))
    {
        printf("Circluar Queue Underflow");
    }
   else {
        printf("Enter a number: ");
        scanf("%d", &a);
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % maxsize;
        queue[rear] = a;
    }
}
int delete1()
{
    int b;
    if(front==-1)
    {
        printf("Queue is empty");
    }
    else{
        b=queue[front];
        printf("Deleted number: %d",b);
         if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % maxsize;
        }
    }
}
int display()
{
    if(front==-1)
    {
        printf("Queue is empty");
    }
    else{
        printf("Queue elements:\n");
        if (front<=rear) 
        {
            for (int i=front;i<=rear;i++) 
            {
                printf("%d\n", queue[i]);
            }
        }
        else 
        {
            for (int i=front;i<maxsize;i++) 
            {
                printf("%d\n", queue[i]);
            }
            for (int i=0;i<=rear;i++) 
            {
                printf("%d\n", queue[i]);
            }
        }    
    }
}