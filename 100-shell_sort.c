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
	size_t s;
	int arr;

	for (gap = size/2; gap > 0; gap /= 2)
	{
		int i;
		for (i = gap; i < s; i += 1)
		{
			int temp = arr[i];

			int j;
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];
			arr[j] = temp;
		}
	}
	return (0);
}
