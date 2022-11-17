#include "lists.h"

/**
 * listint_len -  function that returns the number of elements
 * @h: pointer
 *
 * Return: 0
 */

size_t listint_len(const listint_t *h)

{
int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
