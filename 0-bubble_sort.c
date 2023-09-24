#include "sort.h"

/**
* swap_values - swap two values
* @num1: the first number
* @num2: the second number
*
* Return: Nothing
*/
void swap_values(int *num1, int *num2)
{
	int temp = *num1;

	*num1 = *num2;
	*num2 = temp;
}

/**
* bubble_sort - bubble sort algorithm
* @array: array to sort
* @size: array size
*
* Return: Nothing
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, swapped = 0;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_values(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = 1;
			}
		}

		if (!swapped)
			break;
	}
}
