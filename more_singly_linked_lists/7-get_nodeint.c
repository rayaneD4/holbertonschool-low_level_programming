# include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: poitor
 * @index: index
 * Return: 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	return (0);

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
return (head);
}
