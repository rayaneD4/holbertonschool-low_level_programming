#include "lists.h"

/**
 * free_dlistint -  frees a listint_t list
 * @head: pointer
 *
 */
void free_dlistint(listint_t *head)
{
	listint_t *i;

	while (head != NULL)
	{
		i = head->next;
		free(head);
		head = i;
	}
