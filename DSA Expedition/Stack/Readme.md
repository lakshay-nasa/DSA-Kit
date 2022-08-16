# Stack 

Stack is a linear data structure that follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out). 

<img src="https://cdn.programiz.com/sites/tutorial2program/files/stack.png" alt="Stack Representation">

In the above image, although item 3 was kept last, it was removed first. This is exactly how the LIFO (Last In First Out) Principle works.

Similarly 1 was kept first, it was removed last. This is how the FIFO Principle Works.

<br>
<br>


## Understanding Working Of Stack

<br>

1. A pointer called TOP is used to keep track of the top element in the stack.
2. When initializing the stack, we set its value to -1 so that we can check if the stack is empty by comparing TOP == -1.
3. On pushing an element, we increase the value of TOP and place the new element in the position pointed to by TOP.
4. On popping an element, we return the element pointed to by TOP and reduce its value.
5. Before pushing, we check if the stack is already full
6. Before popping, we check if the stack is already empty


<img src="https://cdn.programiz.com/sites/tutorial2program/files/stack-operations.png" alt="Working Of Stack">

<br>
<br>

## How Stack is Implemented?

<br>

1. Using Arrays
2. Using Linked List


<br>


Note --> For the array-based implementation of a stack, the push and pop operations take constant time, i.e. O(1).

<br>

## Operations On Slack 

There are some basic operations that allow us to perform different actions on a stack.

* Push: Add an element to the top of a stack.

* Pop: Remove an element from the top of a stack.

* IsEmpty: Check if the stack is empty.

* IsFull: Check if the stack is full.

* Peek: Get the value of the top element without removing it.


<br>
<br>


## Type Of Stacks

<br>

1. Register Stack
2. Memory Stack


<br>
<br>


## Application Of Stacks

<br>

* To reverse a word - Put all the letters in a stack and pop them out. Because of the LIFO order of stack, you will get the letters in reverse order.
Stacks help in reversing any set of data or strings.
* The back button in a browser saves all the URLs you have visited previously in a stack. 

    or 

    Undo function in any text editor.

* Stacks are useful for function calls, storing the activation records and deleting them after returning from the function. It is very useful in processing the function calls.

* Stacks are used for conversion of one arithmetic notation to another arithmetic notation.

* Infix to Postfix conversion.

<br>
<br>
