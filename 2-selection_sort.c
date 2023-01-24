#include "sort.h"

/**
 * selection_sort - selection sort algorithm.
 * @array: An input array
 * @size: The size of the array.
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	int tmp = 0;
	size_t i, j, pos = 0;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		pos = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[pos] > array[j])
				pos = j;
		}
		if (pos != i)
		{
			tmp = array[i];
			array[i] = array[pos];
			array[pos] = tmp;
			print_array(array, size);
		}
	}
}
