#include "sort.h"

/**
 *_swap - swap two numbers
 *@n1: first integer to swap
 *@n2: second integer to swap
 *Return: void
 **/

void _swap(int *n1, int *n2)

{
	int tmp;

	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

/**
 * selection_sort - to sort with the 'insertion sort'
 * @array: pointer to array
 * @size: size of array
 */

void selection_sort(int *array, size_t size)

{
	unsigned int i, j, low;

	if (array == NULL || size <= 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		low = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[low])
				low = j;
		}
		if (low != i)
		{
			_swap(&array[low], &array[i]);
			print_array(array, size);
		}
	}
}
