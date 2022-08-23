#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int CircularQueue[SIZE], front = -1, rear = -1;


// We use (rear+1)%SIZE for circular increment.
void enQueue(int value){
    if ((rear+1)%SIZE == front)
    {
        printf("\nQueue is Full!!");
    }

    else{
        if(front == -1) front = 0;
        rear = (rear+1)%SIZE;
        CircularQueue[rear] = value;
        printf("\nInserted -> %d", value);
    }
    
}

//deQueue removes element entered first
void deQueue(){
    if(front == rear){
        printf("\nQueue is Empty!!");
    }

    else{
        front = (front+1)%SIZE;
        printf("\nDeleted : %d", CircularQueue[front]);
    }
}

// Trasversal Or Display

void display(){
    if (rear == front){
        printf("\nQueue is Empty!!");
    }

    else{
        int i;
        printf("\nQueue Elements are: \n");
        for(i = front; i!=rear; i = (i+1)%SIZE){
            printf("%d ", CircularQueue[i]);
        }
        printf("%d", CircularQueue[i]); // This will prints last element where loops exits.
    }
}

int main(){
    display();
    deQueue();

    enQueue(6); //This inserts 6 in Queue
    enQueue(8); //This enqueue 8 in Queue
    enQueue(3); //This inserts 3 in Queue
    enQueue(5); //This inserts 5 in Queue
    enQueue(0); //This inserts 0 in Queue
    enQueue(9); //This inserts 9 in Queue
    enQueue(89); // || 89
    enQueue(98); // || 98
    enQueue(67); // || 67
    enQueue(56); // || 56

    deQueue();  // This deletes first element from Queue i.e 6.
    deQueue();  // This dequeue first element from Queue i.e 8.
    deQueue();  // This dequeue first element from Queue i.e 3.
    enQueue(34); //This inserts 34 in Queue
    enQueue(32); //This inserts 32 in Queue

    display();

    
    return 0;
}