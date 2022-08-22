#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int itemsQueue[SIZE], front = -1, rear = -1;

//enQueue Inserts element
void enQueue(int value){
    if (rear == SIZE-1)
    {
        printf("\nQueue is Full!!");
    }

    else{
        rear++;
        itemsQueue[rear] = value;
        printf("\nInserted -> %d", value);
    }
    
}

//deQueue removes element entered first
void deQueue(){
    if(front == rear){
        printf("\nQueue is Empty!!");
    }

    else{
        front++;
        printf("\nDeleted : %d", itemsQueue[front]);
    }
}

// Trasversal Or Display

void display(){
    if (rear == front){
        printf("Queue is Empty!!");
    }

    else{
        printf("\nQueue Elements are: \n");
        for(int i = front+1; i<=rear; i++){
            printf("%d ", itemsQueue[i]);
        }
    }
}

int main(){
    display();
    deQueue();

    enQueue(6); //This inserts 1 in Queue
    enQueue(8); //This enqueue 2 in Queue
    enQueue(3); //This inserts 3 in Queue
    enQueue(4); //This inserts 4 in Queue

    deQueue();  // This deletes first element from Queue i.e 6.
    deQueue();  // This dequeue first element from Queue i.e 8.

    display();

    
    return 0;
}