#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int bb = 1, tp;

	if (!array || size < 2)
		return;
	while (bb)
	{
		bb = 0;
		for (i = 0; i < (size - 1) && i != (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				tp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tp;
				bb = 1;
				print_array(array, size);
			}
		}
		i = 0;
	}
}
