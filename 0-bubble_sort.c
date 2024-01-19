#include "sort.h"
/**
 * bubble_sort - to sort xithe the 'bubble sort' an array of integers
 * @array: the pointer to the array
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, restart = 0; /* index of elements */

	if (size <= 0 && array == NULL)
		return;

	for (restart = 0; restart < size - 1; restart++)
	{
		for (i = 0; i < (size - restart - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
