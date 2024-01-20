#include "sort.h"

/**
* swap - swap 2 int
* @xp: int
* @yp: int
* Return: array
*/
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
/**
* selection_sort - sorts an array of int
* @array: array to be sorted
* @size: size of the array
* Return: sorted list
*/
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap(array + i, min);
			print_array(array, size);
		}
	}
}
