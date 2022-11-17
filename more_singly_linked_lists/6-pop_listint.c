#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head of the node
 *
 * return: 0
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int data;

	if (*head == NULL)
		return (0);

	data = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (data);
}
