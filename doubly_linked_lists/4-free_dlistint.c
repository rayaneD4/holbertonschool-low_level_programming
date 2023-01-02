#include "lists.h"

/**
 * free_dlistint -  frees a listint_t list
 * @head: pointer
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head != NULL)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
