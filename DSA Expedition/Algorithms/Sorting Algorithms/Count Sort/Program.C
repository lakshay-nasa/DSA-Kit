#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void printArray(int *array, int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int maximum(int array[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}


void countSort(int *array, int size)
{

    int i, j;
    // Find the maximum element in A
    int max = maximum(array, size);

    // Create the count array
    int *count = (int *)malloc((max + 1) * sizeof(int));

    // Initialize the array elements to 0
    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    // Increment the corresponding index in the count array
    for (i = 0; i < size; i++)
    {
        count[array[i]] = count[array[i]] + 1;
    }

    i = 0; // counter for count array (dynamic array)
    j = 0; // counter for given array

    while (i <= max)
    {
        if (count[i] > 0)
        {
            array[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}


int main()
{

    int myarr[] = {-3, 4, 5, -2, 0, 12, 1, 22, -6};
    // int n = 9;
    int size = sizeof(myarr) / sizeof(myarr[0]);

    printArray(myarr, size);
    countSort(myarr, size);
    printArray(myarr, size);

    return 0;
}