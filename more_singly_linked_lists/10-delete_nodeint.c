#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: node head
 * @index: index
 *
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *tmp = *head, *len;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	for (i = 1; tmp != NULL && i < index; i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (-1);

	len = tmp->next->next;
	free(tmp->next);
	tmp->next = len;

	return (1);
}
