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


/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to pointer to head
 * @idx: index
 * @n: data to add to node
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp = *head;
	unsigned int i, no = listint_len(*head);

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = temp;
		*head = newnode;
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
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
