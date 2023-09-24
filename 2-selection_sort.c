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
* selection_sort - selection sort algortihm on array
* @array: array to sort
* @size: array size
*
* Return: Nothing
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		temp = i;
		for (j = i + 1; j < size; j++)
			array[j] < array[temp] ? temp = j : temp;

		swap_values(&array[i], &array[temp]);
		print_array(array, size);
	}
}
