#include "lists.h"

/**
 * list_len -  function that returns the number of elements
 * @h: number
 *
 * Return: 0
 *
 */

size_t list_len(const list_t *h)
{
int i = 0;

	while (h == NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}


