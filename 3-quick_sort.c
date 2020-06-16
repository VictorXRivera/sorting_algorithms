#include "sort.h"

/**
 * swap - helper to swap elements
 * @a: left element
 * @b: right element
 * Return: Void
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * partition - Lomuto scheme
 * @low: smaller than pivot
 * @high: higher than pivot
 * Return: Void
 */
int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}
/**
 * quickSort - true quick sort
 * @array: array to sort through
 * @low: smaller number
 * @high: higher number
 * Return: Void
 */
void quickSort(int *array, int low, int high)
{
	int idx;

	if (low < high)
	{
		idx = partition(array, low, high);
		quickSort(array, low, idx - 1);
		quickSort(array, idx + 1, high);
	}
}
/**
 * quick_sort - quick sort algorithm
 * @array: array
 * @size: size of array
 * Return: Void
 */
void quick_sort(int *array, size_t size)
{
	quickSort(array, *array, *array);
	print_array(array, size);
}
