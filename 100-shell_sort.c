#include "sort.h"

/**
 * swap - Swap two integers in an array.
 * @c: The first integer to swap.
 * @d: The second integer to swap.
 */
void swap(int *c, int *d)
{
	int tmp;

	tmp = *c;
	*c = *d;
	*d = tmp;
}

/**
* shell_sort - sorts an array of integers ins asc order
* @array: array
* @size: size of the array
* Return: array
*/
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			j = i;
			while (j >= gap && array[j - gap] > array[j])
			{
				swap(array + j,	array + (j - gap));
				j -= gap;
			}
		}
		print_array(array, size);
	}
}
