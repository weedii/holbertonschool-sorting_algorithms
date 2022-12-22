#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 *          in ascending order using the Bubble sort algorithm
 * @array: array
 * @size:  size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp;

	for (i = 0; i < size; i++)
	{
		if (array[i] > array[i + 1])
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			print_array(array, size);
		}
	}
}
