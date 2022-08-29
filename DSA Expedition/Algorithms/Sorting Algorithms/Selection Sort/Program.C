#include <stdio.h>

void printArray(int *array, int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void selectionSort(int *array, int size)
{
    int min_idx, temp;
    // Loop or passes
    for (int i = 0; i <= size - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < size; j++)
        {   
            // For ascending order, change array[j] > min_idx to array[j] < min_idx.
            if (array[j] > array[min_idx])    
            {
                min_idx = j;
            }
        }
        // swap array[i] and array[min_idx]
        temp = array[i];
        array[i] = array[min_idx];
        array[min_idx] = temp;
    }
}

int main()
{

    int myData[] = {5, 4, 3, 2, 0, 12};
    // int n = 6;
    int size = sizeof(myData) / sizeof(myData[0]);

    printArray(myData, size);
    selectionSort(myData, size);
    printArray(myData, size);

    return 0;
}