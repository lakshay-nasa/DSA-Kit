#include <stdio.h>
#include <stdlib.h>

// Create Stack using Linked  list
struct myStackNode
{
    int data;
    struct myStackNode *next;
};

struct myStackNode *top = NULL;


// linkedList_Traversal or display
void display(struct myStackNode *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// If stack is empty
int isEmpty(struct myStackNode *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// If stack is Full
int isFull(struct myStackNode *top)
{
    struct myStackNode *p = (struct myStackNode *)malloc(sizeof(struct myStackNode));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// To push new node
struct myStackNode *push(struct myStackNode *top, int x)
{
    if (isFull(top))
    {
        printf("Stack Overflow\n");
    }

    else
    {
        struct myStackNode *n = (struct myStackNode *)malloc(sizeof(struct myStackNode));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    };
}

// To pop existing node
// int pop(struct myStackNode **top)
// {
//     if (isEmpty(*top))
//     {
//         printf("Stack Underflow\n");
//     }
//     else
//     {
//         struct myStackNode *n = *top;
//         *top = (*top)->next;
//         int x = n->data;
//         free(n);
//         return x;
//     }
// }

int pop(struct myStackNode* tp)
{
    if (isEmpty(tp))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        struct myStackNode *n = tp;
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

// Implementing peek operaton --> This operation return the element at a given position.
int peek(int pos){
    struct myStackNode* ptr = top;
    for(int i; (i < pos-1 && ptr !=NULL); i++)
    {
        ptr = ptr->next;
    }
    if(ptr!=NULL){
        return ptr -> data;
    }
    else{
        return -1;
    }
}


int main()
{

    top = push(top, 89);
    top = push(top, 8);
    top = push(top, 9);
    top = push(top, 2);

    display(top);
    printf("Popped Element: %d \n",pop(top));
    display(top);

    printf("Value at 1st Position: %d\n", peek(1));
    return 0;
}

