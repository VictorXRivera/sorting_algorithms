#include "sort.h"

/**
 * swap - swap function
 * @xp: pointer to int
 * @yp: pointer to size t
 * Return: Void
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * bubble_sort - bubble sort algo
 * @array: array
 * @size: size of array
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	size_t h;
	size_t b;
	
	for (h = 0; h < size - 1; h++)
	{
		for (b = 0; b < size - h - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				swap(&array[b], &array[b + 1]);
				print_array(array, size);
			}
		}
	}
}
