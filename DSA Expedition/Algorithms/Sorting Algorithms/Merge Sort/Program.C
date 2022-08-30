#include <stdio.h>

void printArray(int *array, int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void merge(int array[], int mid, int low, int high)
{
    int i, j, k, array2[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        // For descending order, change array[i] < array[j] to array[i] > array[j].
        if (array[i] < array[j])
        {
            array2[k] = array[i];
            i++;
            k++;
        }

        else
        {
            array2[k] = array[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        array2[k] = array[i];
        k++;
        i++;
    }

    while (j <= high)
    {
        array2[k] = array[j];
        k++;
        j++;
    }

    for (int i = low; i <= high; i++)
    {
        array[i] = array2[i];
    }
}

void mergeSort(int array[], int low, int high)
{

    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(array, low, mid);
        mergeSort(array, mid + 1, high);
        merge(array, mid, low, high);
    }
}

int main()
{

    int myarr[] = {-3, 4, 5, -2, 0, 12, 1};
    // int n = 7;
    int size = sizeof(myarr) / sizeof(myarr[0]);
    printArray(myarr, size);
    mergeSort(myarr, 0, size - 1);
    printArray(myarr, size);

    return 0;
}