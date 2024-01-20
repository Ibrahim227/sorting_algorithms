#include "sort.h"

/**
* insertion_sort_list - sorts  a doubly ;inked list of int
* @list: list to be sorted
* Return: list
*/
void insertion_sort_list(listint_t **list)
{
	int i, j, k;
	listint_t *lk = **list;

	for (i = 0; i < lk; i++)
	{
		k = lk[i];
		j = k - 1;

		while (j >= 0 && lk[j] > k)
		{
			lk[j + 1] = lk[j];
			j = j - 1;
		}
		lk[j + 1] = k;
	}
}
