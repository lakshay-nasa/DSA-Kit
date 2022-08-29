#include <stdio.h>


void printArray(int* array, int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void insertionSort(int *array, int size){
    int key, j;
    // Loop or passes
    for(int i=1; i <= size - 1; i++)
    {
        key = array[i];
        j = i-1;
        // For descending order, change array[j] > key to array[j] < key.
        while(j>=0 && array[j] > key){
            array[j+1] = array[j];
            j--; // --j
        }
        array[j+1] = key;
    }
}

int main(){

    int myData[] = {5, 4, 3, 2, 0, 12};
    // int n = 6;
    int size = sizeof(myData) / sizeof(myData[0]);

    printArray(myData, size);
    insertionSort(myData, size);
    printArray(myData, size);

    return 0;
}