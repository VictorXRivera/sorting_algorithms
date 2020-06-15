#include "sort.h"

/**
 * swap_2 - swaping elements of array
 * @xp: element
 * @yp: element
 * Return: Void
 */
void swap_2(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * selection_sort - selection sort
 * @array: array
 * @size: size of array
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
	unsigned int h;
	unsigned int b;
	unsigned int min_idx = 0;

	for (h = 0; h < size; h++)
	{
		min_idx = h;
		for (b = h; b < size; b++)
		{
			if (array[b] < array[min_idx])
				min_idx = b;
		}
		if (min_idx != h)
		{
			swap_2(&array[min_idx], &array[h]);
			print_array(array, size);
		}
	}
}
