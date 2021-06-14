#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array : an array of integer to sort
 * @size: the size of the array
 */

void quick_sort(int *array, size_t size)
{
	size_t low = 0, high = 0;

	low = 0;
	high = size - 1;
	recursion(array, low, high, size);
}

/**
 * recursion - a recursive function
 * @array : an array of integer to sort
 * @size: the size of the array
 * @low: the low number of the array
 * @high: the high number of the array
 */

void recursion(int *array, int low, int high, int size)
{
	int pivot = 0;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		recursion(array, low, pivot - 1, size);
		recursion(array, pivot + 1, high, size);
	}
}

/**
 * partition - a function who can divide an array
 * @array: an array of integer to sort
 * @size: the size of the array
 * @low: the low number of the array
 * @high: the high number of the array
 * Return: the middle of the array
 */

int partition(int *array, int low, int high, int size)
{
	int pivot = 0, i = 0, j = 0;

	pivot = array[high];
	i = low;
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			if (j != i)
				swap(array, &array[j], &array[i], size);
			i++;
		}
	}
	if (i != high)
		swap(array, &array[i], &array[high], size);
	return (i);
}

/**
 * swap - swap two integers
 * @array : an array of integer to sort
 * @a: an integer
 * @b: an integer
 * @size: the size of the array
 */

void swap(int *array, int *a, int *b, int size)
{
	int aux = 0;

	aux = *a;
	*a = *b;
	*b = aux;
	print_array(array, size);
}
