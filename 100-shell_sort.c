#include "sort.h"

/**
 * shell_sort - shell sort algorithm
 * @array: array
 * @size: size of array
 * Return: Void
 */
void shell_sort(int *array, size_t size)
{
	size_t h, b, j, temp;

	for (h = size / 2; h > 0; h = h / 2)
	{
		for (b = h; b < size; b++)
		{
			for (j = b - h; j > 0; j = j - h)
			{
				if (array[j + h] >= array[j])
					break;
				else
				{
					temp = array[j];
					array[j] = array[j + h];
					array[j + h] = temp;
				}
			}
		}
	}
}
