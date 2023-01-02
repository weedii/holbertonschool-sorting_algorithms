#include "sort.h"

/***/
void quick_sort(int *array, size_t size)
{
    quicksort(array, 0, size, size);
}

/***/
void quicksort(int *array, int start, int end, size_t size)
{
    int i;

    if (start >= end)
        return;

    i = partition(array, start, end, size);

    quicksort(array, start, i - 1, size);
    quicksort(array, i + 1, end, size);
}

/***/
int partition(int *array, int start, int end, size_t size)
{
    int pivot, i, j, tmp;

    pivot = array[end];
    i = start;

    for (j = start; j < end; j++)
    {
        if (array[j] < pivot)
        {
            if (i != j)
            {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
                print_array(array, size);
            }
            i++;
        }
    }
    if (array[i] != array[end])
    {
        tmp = 0;
        tmp = array[i];
        array[i] = array[end];
        array[end] = tmp;
        print_array(array, size);
    }

    return (i);
}