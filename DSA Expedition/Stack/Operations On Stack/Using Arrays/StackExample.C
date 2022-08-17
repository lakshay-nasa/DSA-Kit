#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct word
{
    int size;
    int top;
    char *arr;

};



int stackEmpty(struct word *ptr)
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

int stackFull(struct word *ptr)
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



//Push Operation (This will add words to container)
void push(struct word * ptr, char Wval){
    if (stackFull(ptr)){
        printf("Stack overflow\n");
    }

    else{
        ptr->top++;
        ptr->arr[ptr->top]  = Wval;
    }
}




//Pop Operation (This will remove top element from container)
// char pop(struct word * ptr){
//     if (stackEmpty(ptr)){
//         const char a[] = "Stack is Empty: Stack Underflow!!\n";
//         return *a ;
//     }

//     else{
//         ptr->top--;
//         char val = ptr->arr[ptr->top];
//         return val;
//     }
// }


char pop(struct word * ptr){
    printf("%d", ptr->top--);
}


int main(){

    struct word *w = (struct word *) malloc(sizeof(struct word));

    w->size = 5;
    w->top = -1;
    w->arr = (char *) malloc(w->size *sizeof(char));

    printf("Word Container(Stack) Created.\n");


    printf("Before Pushing: %d\n", stackFull(w));       //
    printf("Before Pushing: %d\n", stackEmpty(w));

    char mystr[] = "hello";
    int len = strlen(mystr);
    int i;

    //Pushing Words
    for(i=0;i<len;i++){
    push(w, mystr[i]);
    }

    for(i=0;i<len;i++){
    pop(w);
    }

    // push(w, 'e');
    // push(w, 'l');
    // push(w, 'l');
    // push(w, 'o');
    // push(w, 2); ----> This will give stack overflow error.

    printf("After Pushing: %d\n", stackFull(w));
    printf("After Pushing: %d\n", stackEmpty(w));

    // printf("%d\n", w->arr);

    

    // printf("Popped %d from the stack\n", pop(w));


    //Pop Operation (This will pop(remove) the word from stack one by one)


}