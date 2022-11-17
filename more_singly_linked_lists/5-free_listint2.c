#include "lists.h"

/**
 * listint2 -  frees a listint_t list
 * @head: pointer
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	if (*head == NULL || head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}

