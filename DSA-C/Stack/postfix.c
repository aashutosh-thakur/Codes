#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int precedence(char ch)
{
    if(ch=='^')
    {
       return 3;
    }
    else if(ch=='*'||ch=='/')
    {
        return 2;
    }
    else if(ch=='+'||ch=='-')
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isOperator(char ch)
{
    if (ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^')
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct stack *ptr)
{
    return ptr -> top == -1;
}
int isFull(struct stack*ptr)
{
    return ptr->top==ptr->size-1;
}
int stackTop(struct stack*sp)
{
    return sp->arr[sp->top];
}
void push(struct stack *ptr, char val)
{
    if(isFull(ptr))
    {
        printf("Stack Overflow!Cannot push element to stack\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
void pop(struct stack *ptr, char val)
{
    if(isEmpty(ptr)){
        printf("Stack is underflow! Cannot pop element in stack\n");
        return -1;
    }
    else{
        char val =ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
struct stack
{
    int size;
    int top;
    char *arr;
};

int main()
{
    char infix[100];
    
    return 0;
}