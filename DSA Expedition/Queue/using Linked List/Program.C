#include <stdio.h>
#include <stdlib.h>

struct QueueNode *front = NULL;
struct QueueNode *rear = NULL;

struct QueueNode {
    int data;
    struct QueueNode *next;
};

void display(struct QueueNode *ptr){
    printf("\nQueue Elements are: \n");

    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enQueue(int val){
    struct QueueNode *n = (struct QueueNode *) malloc(sizeof(struct QueueNode));
    if(n==NULL){
        printf("Queue is Full");
    }

    else{
        n->data = val;
        n->next = NULL;
        if(front==NULL){
            front=rear=n;
        }
        else{
            rear->next = n;
            rear=n;
        }
    }
}

void deQueue(){
    int val = -1;
    struct QueueNode *ptr = front;
    if(front==NULL){
        printf("Queue is Empty\n");
    }
        else{
            front = front->next;
            val = ptr->data;
            free(ptr);
        }
        printf("Dequeuing element: %d\n", val);
}

int main(){
    enQueue(5); //This enqueue 5 in Queue.
    enQueue(6); //This enqueue 6 in Queue.
    enQueue(8); //This enqueue 8in Queue.
    enQueue(2); //This enqueue 2 in Queue.

    deQueue();  //This dequeue fisrt element in Queue i.e 5.

    display(front);

    return 0;
}


