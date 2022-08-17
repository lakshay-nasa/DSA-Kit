#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int isFull(struct Stack *ptr)
{

    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int main()
{
    // struct Stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int * ) malloc(s.size * sizeof(int));

    struct Stack *s;

    //If segmentation error or code is not running, use dynamic memory i.e after initializing allocate dynamic memory to s(struct name) like below, otherwise don't use below code. 
    s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = 80;

    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int)); 

    // To check is stack is empty
    if (isEmpty(s))
    {
        printf("The stack is empty");
    }

    else
    {
        printf("The stack is not empty");
    }

    return 0;
}