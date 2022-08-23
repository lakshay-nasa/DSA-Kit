#include <stdio.h>
#include <stdlib.h>

struct CircQueue{
    int SIZE;
    int front;
    int rear;
    int* arr;
};


void enQueue(struct CircQueue *q, int val){
    if((q->rear+1)%q->SIZE==q->SIZE-1){         // isFull
        printf("CircQueue is Full!\n");
    }

    else{
        if(q->front == -1) q->front = 0;
        q->rear = (q->rear+1)%q->SIZE;
        q->arr[q->rear] = val;
        printf("Enqued element: %d\n", val);
    }
}

int deQueue(struct CircQueue *q){
    int element;
    if(q->front==q->rear){                       // is Empty
        printf("CircQueue is Empty!!");
    }

    else{
        element = q->arr[q->front];
        if(q->front == q->rear){
            q->front = -1;
            q->rear = -1;
        }
        
        else{
        q->front = (q->front+1)%q->SIZE;
    }
        printf("\nDeleted : %d", element);
    return(element);
    }
}

// Traversal or Display

void display(struct CircQueue *q){
    if (q->rear == q->front){
        printf("CircQueue is Empty!!");
    }

    else{
        int i;
        printf("\nCircQueue Elements are: \n");
        for(i = q->front; i!=q->rear; i = (i+1)%q->SIZE){
            printf("%d ", (q)->arr[i]);
        }
        printf("%d", q->arr[i]);
    }
}

int main(){
    struct CircQueue q;
    q.SIZE = 10;
    q.front = q.rear = -1;
    q.arr = (int*) malloc(q.SIZE*sizeof(int));

    // Enqueuing Elements
    enQueue(&q, 2); //This enQueue 2 in CircQueue.
    enQueue(&q, 3); //This enQueue 3 in CircQueue.
    enQueue(&q, 4); //This enQueue 4 in CircQueue.
    enQueue(&q, 5); //This enQueue 5 in CircQueue.

    deQueue(&q);    //This deQueue fisrt element in CircQueue i.e 2.
    deQueue(&q);    //This deQueue first element in CircQueue i.e 3.

    display(&q);

    return 0;
}