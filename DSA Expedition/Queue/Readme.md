# Queue Data Structure

Queue follows FIFO(First-In-First-Out) rule.
<br>
<br>

# Implementation Of Queue
1. Arrays
2. Linked Lis
3. Using ADTs

# Basic Operations of Queue
1. Enqueue
2. Dequeue
3. IsEmpty
4. IsFull
5. Peek
6. firstval
7. lastVal

Note --> Basic Operations can be Implemented on every type of Queue.

<br>

## Drawbacks Of Using Queue using Arrays
1. Space is not used efficiently -> As the insertion in the queue is from the rear end and in the case of Linear Queue of fixed size insertion is not possible when rear reaches the end of the queue.

So, we use Circlar Queue.

<br>

# Circular Queue

A circular queue is the extended version of a regular queue where the last element is connected to the first element. Thus forming a circle-like structure.

<br>
<br>

# Double Ended Queue (DEQueue)

A Double Ended Queue in C, also known as Deque, is a queue data structure in which insertion and deletion can be done from both left and right (front or the rear) ends.

Thus, it does not follow FIFO rule (First In First Out).


<img src="https://cdn.programiz.com/sites/tutorial2program/files/deque.png" alt="DEQueue">

<br>
<br>

## Types Of DEQueue
1. Input Restricted Deque

In this deque, input is restricted at a single end but allows deletion at both the ends.

2. Output Restricted Deque

In this deque, output is restricted at a single end but allows insertion at both the ends.

## Operation On DEQueue

1. isEmpty
2. isFull
3. Initialize()
4. display()
5. enQueueFront()
6. enQueueRear()
7. deQueueFront()
8. deQueueRear()