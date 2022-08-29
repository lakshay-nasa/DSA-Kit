#include <stdio.h>

// Print Array
void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Perform Bubble Sort
void bubbleSort(int *array, int size)
{
    // Outer Loop to access each element
    for (int step = 0; step < size - 1; step++)
    {
        printf("Working on pass number %d\n", step + 1);
        // Inner Loop to compare array elements
        for (int i = 0; i < size - step - 1; i++)
        {

            // compare two adjacent elements
            // use > for ascending and < for descending order
            if (array[i] > array[i + 1])
            {

                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

// Adaptive Bubble Sort -> Array already sorted
void AdaptiveBubbleSort(int array[], int size)
{
    {
        int isSorted = 0;
        // Outer Loop to access each element
        for (int step = 0; step < size - 1; step++)
        {
            printf("Working on pass number %d\n", step + 1);
            isSorted = 1;
            // Inner Loop to compare array elements
            for (int i = 0; i < size - step - 1; i++)
            {

                // compare two adjacent elements
                // use > for ascending and < for descending order
                if (array[i] > array[i + 1])
                {

                    int temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                    isSorted = 0;
                }
            }

            if (isSorted)
            {
                return; // we used 'return' to terminate complete function.
            }
        }
    }
}

int main()
{
    int myData[] = {-3, 4, 5, -2, 0, 12};
    // int myData[] = {1, 2, 3, 4, 5, 6};
    // int myData[] = {1, 2, 3, 5, 4, 6};

    // int size = 6;
    int size = sizeof(myData) / sizeof(myData[0]);

    printArray(myData, size);
    bubbleSort(myData, size);
    // AdaptiveBubbleSort(myData, size);
    printArray(myData, size);

    return 0;
}