#include "sort.h"

/**
* shell_sort - sorts an array of integers ins asc order
* @array: array
* @size: size of the array
* Return: array
*/
void shell_sort(int *array, size_t size)
{
	int gap;

	for (gap = size/2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < size; i+= 1)
		{
			int temp = array[i];

			int j;
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
				array[j] = array[j - gap]
			array[j] = temp;
		}
	}
	return (0);
}
