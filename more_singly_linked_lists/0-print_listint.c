#include "lists.h"

/**
 * print_listint - call point
 * @h: head of the node
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
{
		printf("%d\n", h->n);
		i++;
		h = h->next;
}
return (i);
}
