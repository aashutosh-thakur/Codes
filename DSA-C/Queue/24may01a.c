#include<stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node* f = NULL; 
struct Node* r = NULL;
void Traversal(struct Node *ptr)
{
    while(ptr != NULL)
    {
        printf("Element is %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int enqueue(int data)
{
    struct Node*n=(struct Node*)malloc(sizeof(struct Node));
    if(n==NULL)
    {
        printf("Queue Overflow");
    }
    else{
        n->data=data;
        n->next=NULL;
        if(f==NULL)
        {
            f=r=n;
        }
        else 
        {
            r->next=n;
            r=n;
        }
    }
}
int dqueue()
{
    int val=-1;
    struct Node *ptr=f;
    if(f==NULL)
    {
        printf("Queue underflow");
    }
    else{
        f=f->next;
        val=ptr->data;
    }
    free(ptr);
    return val;
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dqueue();
    Traversal(f);
    return 0;
}
