#include "sort.h"
/**
 * bubble_sort - function that sorts an array integers in ascending order
 * @array: input arrray
 * @size: size of the array
 * Return: no return
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, idx, tmp = 0;

	if (array == NULL || size < 2)
		return;

	for (x = 0; x < size; x++)
	{
		for (idx = 0; idx < size - 1; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				tmp = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}

