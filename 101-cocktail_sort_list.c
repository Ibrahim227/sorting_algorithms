#include "sort.h"

/**
 * swap - Swap two integers in an array.
 * @c: The first integer to swap.
 * @d: The second integer to swap.
*  Return: sorted list
 */
void swap(int *c, int *d)
{
	int tmp;

	tmp = *c;
	*c = *d;
	*d = tmp;
}

/**
* cocktail_sort_list - sort a doubly linked list on int in asc order
* @list: list
* Return: list
*/
void cocktail_sort_list(listint_t **list)
{

}
