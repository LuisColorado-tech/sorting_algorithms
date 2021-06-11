#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    size_t i, j, k, temp;

    for (i = 1; i < size; i++)
    {
        for(j = 0; j < size - i; j++)
        {
            if(array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            for(k = 1; k < size; k++)
                printf("%d, ", array[k]);
            printf("\n");
        }
    }
}
