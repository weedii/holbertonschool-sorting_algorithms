#include "sort.h"
/**
 * 
 * 
*/
void selection_sort(int *array, size_t size)
{
    size_t i, j, min;
    int swap;
    
    for (i = 0; i < size; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap = array[i];
            array[i] = array[min];
            array[min] = swap;
        }
    }
}