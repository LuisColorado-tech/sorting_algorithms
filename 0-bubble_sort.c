#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: an array of integers
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, k, temp;

	for (i = 1; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				for (k = 0; k < size; k++)
				{
					if (k < size - 1)
						printf("%d, ", array[k]);
					else
						printf("%d", array[k]);
				}
				printf("\n");
			}
		}
	}
}
