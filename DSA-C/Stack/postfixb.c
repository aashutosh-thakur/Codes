#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack {
    int size;
    int top;
    char *arr;
};
int precedence(char ch) {
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}
int isEmpty(struct stack *ptr) {
    return ptr->top == -1;
}
int isFull(struct stack *ptr) {
    return ptr->top == ptr->size - 1;
}
char stackTop(struct stack *sp) {
    return sp->arr[sp->top];
}
void push(struct stack *ptr, char val) {
    if (isFull(ptr)) {
        printf("Stack Overflow! Cannot push element to stack\n");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
char pop(struct stack *ptr) 
{
    if (isEmpty(ptr)) {
        printf("Stack is underflow! Cannot pop element in stack\n");
        return -1;
    } else {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
char *infixToPostfix(char *infix) 
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0, j = 0;

    while (infix[i] != '\0') 
    {
        if (!isOperator(infix[i])) 
        {
            postfix[j] = infix[i];
            j++;
            i++;
        } else {
            if (precedence(infix[i]) > precedence(stackTop(sp))) 
            {
                push(sp, infix[i]);
                i++;
            } else 
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isEmpty(sp)) 
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    free(sp->arr);
    free(sp);
    return postfix;
}
int main() {
    char infix[100];
    printf("Enter an infix expression: ");
    scanf("%s", infix);
    printf("Postfix is %s\n", infixToPostfix(infix));
    return 0;
}
