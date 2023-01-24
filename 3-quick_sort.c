#include "sort.h"
/**
 * quick_sort - quick sort algorithm
 * @array: input arrray
 * @size: size of the array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	qsort_(array, 0, size - 1, size);
}
/**
 * qsort_ - intermediary sort
 * @a: input arrray
 * @low: index for the first element
 * @high: index for the last element
 * @size: size of the array
 * Return: Nothing
 */
void qsort_(int *a, int low, int high, int size)
{
	int hi, lo, i;
	int tmp;

	if (low < high)
	{
		hi = high;
		lo = low;
		for (i = low; i < high; i++)
		{
			if (a[i] < a[hi])
			{
				if (i != lo)
				{
					tmp = a[i];
					a[i] = a[lo];
					a[lo] = tmp;
					print_array(a, size);
				}
				lo++;
			}
		}
		if (lo != hi && a[lo] != a[hi])
		{
			tmp = a[lo];
			a[lo] = a[hi];
			a[hi] = tmp;
			print_array(a, size);
		}
		qsort_(a, low, lo - 1, size);
		qsort_(a, lo + 1, high, size);
	}
}
