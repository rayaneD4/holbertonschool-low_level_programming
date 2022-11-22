# include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: poitor
 * @index: index
 * Return: 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ins;

	if (head == NULL)
	return (0);

	for (i = 0; ins < index && head != NULL; ins++)
	{
		head = head->next;
	}
return (head);
}
