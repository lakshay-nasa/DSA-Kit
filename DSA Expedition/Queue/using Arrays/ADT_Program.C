#include <stdio.h>
#include <stdlib.h>

struct Queue{
    int SIZE;
    int front;
    int rear;
    int* arr;
};


void enQueue(struct Queue *q, int val){
    if(q->rear==q->SIZE-1){         // isFull
        printf("Queue is Full!\n");
    }

    else{
        q->rear++;
        q->arr[q->rear] = val;
        printf("Enqued element: %d\n", val);
    }
}

void deQueue(struct Queue *q){
    if(q->front==q->rear){                       // is Empty
        printf("Queue is Empty!!");
    }

    else{
        q->front++;
        printf("Dequeuing element: %d\n", q->arr[q->front]);
    }
}

// Traversal or Display

void display(struct Queue *q){
    if (q->rear == q->front){
        printf("Queue is Empty!!");
    }

    else{
        printf("\nQueue Elements are: \n");
        for(int i = q->front+1; i<=q->rear; i++){
            printf("%d ", (q)->arr[i]);
        }
    }
}

int main(){
    struct Queue q;
    q.SIZE = 10;
    q.front = q.rear = 0;
    q.arr = (int*) malloc(q.SIZE*sizeof(int));

    // Enqueuing Elements
    enQueue(&q, 2); //This enqueue 2 in Queue.
    enQueue(&q, 3); //This enqueue 3 in Queue.
    enQueue(&q, 4); //This enqueue 4 in Queue.
    enQueue(&q, 5); //This enqueue 5 in Queue.

    deQueue(&q);    //This dequeue fisrt element in Queue i.e 2.
    deQueue(&q);    //This dequeue first element in Queue i.e 3.

    display(&q);

    return 0;
}