#include "sort.h"
#include <stdio.h>

/**
* shell_sort - Sorts an array of integers in ascending order
* using the Shell sort algorithm with the Knuth sequence.
* @array: The array to be sorted.
* @size: The size of the array.
*/
void shell_sort(int *array, size_t size)
{
	int gap, i, j, temp;

	if (array == NULL || size < 2)
		return;
	gap = 1;
	while (gap < (int)size / 3)
	{
		gap = gap * 3 + 1;
	}

	while (gap > 0)
	{
		for (i = gap; i < (int)size; i++)
		{
			temp = array[i];
			j = i;

			while (j >= gap && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j -= gap;
			}

			array[j] = temp;
		}
		print_array(array, size);


		gap = (gap - 1) / 3;
	}
}

