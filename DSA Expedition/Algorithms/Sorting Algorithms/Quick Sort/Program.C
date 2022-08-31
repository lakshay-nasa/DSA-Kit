#include <stdio.h>

void printArray(int *array, int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int partition(int array[], int low, int high)
{
    int pivot = array[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    { // For descending order, change array[i] <= pivot to array[i] >= pivot and array[j] > pivot to array[j] < pivot.
        while (array[i] <= pivot)
        {
            i++;
        }

        while (array[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }

    } while (i < j);

    // Swap array[low] and array[j]
    temp = array[low];
    array[low] = array[j];
    array[j] = temp;
    return j;
}

void quickSort(int array[], int low, int high)
{
    int partitionIndex;     // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(array, low, high);
        quickSort(array, low, partitionIndex - 1); // Sort left subarray
        quickSort(array, partitionIndex + 1, high); // Sort right subarray
    }
}

int main()
{
    int myarr[] = {-3, 4, 5, -2, 0, 12, 1, 22, -6};
    // int n = 9;
    int size = sizeof(myarr) / sizeof(myarr[0]);
    printArray(myarr, size);
    quickSort(myarr, 0, size - 1);
    printArray(myarr, size);
    return 0;
}