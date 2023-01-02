#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: pointer
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int ncNodes = 0;

	while (h != NULL)
	{
		h = h->next;
		ncNodes++;
	}
	return (ncNodes);
}
