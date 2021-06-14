#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: an array of integers
 * @size: the size of the array
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_ind, temp;
	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_ind = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_ind])
				min_ind = j;
		if (array[min_ind] != array[i])
		{
			temp = array[min_ind];
			array[min_ind] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
