#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *getNewNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->next = n;
    return n;
}
void Traversal(struct node *head)
{
    if (head == NULL)
    {
        printf("Linklist is Empty");
    }
    struct node *temp = head;
    do
    {
        printf("Element is %d\n", temp->data);
        temp = temp->next;
    } while (temp != head);
}
struct node *insertion_At_begining(struct node *head, int data)
{
    struct node *n = getNewNode(data);
    if (head == NULL)
    {
        n->next = n;
        return n;
    }
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        temp->next = n;
        n->next = head;
        return head;
    }
}
struct node *Insertion_At_any_index(struct node *head, int data, int index)
{
    struct node *n = getNewNode(data);
    if (index == 0)
    {
        return insertion_At_begining(head, data);
    }
    struct node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
        if (temp == head)
        {
            return head;
        }
    }
    n->next = temp;
    temp->next = n;
    return head;
}

struct node *Deletion_At_first(struct node *head)
{
    if (head == NULL || head->next == head)
    {
        free(head);
        return NULL;
    }
    struct node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = head->next;
    free(head);
    return temp->next;
}

struct node *Deletion_At_last(struct node *head)
{
    if (head == NULL || head->next == head)
    {
        free(head);
        return NULL;
    }
    else
    {
        struct node *ptr, *temp;
        ptr = head;
        while (ptr->next != NULL)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        free(ptr);
        return head;
    }
}
struct node *Deletion_At_Any_index(struct node *head, int index)
{
    if (head == NULL || head->next == head)
    {
        free(head);
        return NULL;
        printf("linklist is empty");
    }
    struct node *temp = head;
    for (int i = 0; i < index; i++)
    {
        temp = temp->next;
        if (temp == head)
        {
            return head;
        }
    }
    struct node *q = temp->next;
    temp->next = q->next;
    free(q);
    return head;
}
int main()
{
    struct node *head = NULL;
    int n,data ,index;
    while (1)
    {
        printf("Enter the operation you want to perform : ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            
            printf("Enter the no = ");
            scanf("%d", &data);
            head=insertion_At_begining(head, data);
            break;
        case 2:
        
            printf("Enter the no = ");
            scanf("%d", &data);
            printf("Enter the index = ");
            scanf("%d",&index);
            Insertion_At_any_index(head,data ,index);
            break;
        case 3:
            Deletion_At_first(head);
            break;
        case 4:
            Deletion_At_last(head);
            break;
        case 5:
            printf("Enter the index = ");
            scanf("%d",&index);
            Deletion_At_Any_index(head, index);
            break;
        case 6:
            Traversal(head);
            break;
        default:
            printf("You choosen the invalid operation");
            break;
        }
    }
    return 0;
}