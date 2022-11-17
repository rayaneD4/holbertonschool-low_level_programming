#include "lists.h"

/**
 * listint2 -  frees a listint_t list
 * @head: pointer
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;
	if (head == NULL)
	{
		return(NULL);
	}
	while (tmp != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
