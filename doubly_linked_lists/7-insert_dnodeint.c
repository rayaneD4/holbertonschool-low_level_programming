#include "lists.h"

/**
 * dlistint_len -  function that returns the number of elements
 * @h: pointer
 *
 * Return: 0
 */

size_t dlistint_len(const dlistint_t *h)

{
int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}


/**
 * insert_dnodeint_at_index - inserts a new node
 * @head: pointer to pointer to head
 * @idx: index
 * @n: data to add to node
 * Return: 0
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp = *h;
	unsigned int i, no = dlistint_len(*h);

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = temp;
		*h = newnode;
		return (newnode);
	}
	if (idx > no)
		return (NULL);


	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next = newnode;
	

	return (newnode);
}
