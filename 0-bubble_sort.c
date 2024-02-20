#include "sort.h"

/**
 * bubble_sort - bubble sort algorithms
 * @array: array to be sorted
 * @size: the size of the @array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size; j++)
		{
			if (array[j] < array[j - 1])
			{
				int temp;

				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
