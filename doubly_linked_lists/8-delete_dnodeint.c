 #include "lists.h"
/**
 * delete_dnodeint_at_index - Function that deletes the node at the index
 * @head: first node
 * @index: index of the node
 * Return: 1 if it succeeded nad -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	if (*head != NULL)
	{
		while (index != 0 && tmp != NULL)
		{
			tmp = tmp->next;

			index--;
		}
		if (index != 0)
			return (-1);

		if (index == 0 && tmp != NULL)
		{
			if (tmp->next)
				tmp->next->prev = tmp->prev;

			if (tmp->prev)
				tmp->prev->next = tmp->next;
			else
				*head = tmp->next;
			free(tmp);
			return (1);

		}
	}
	return (-1);
}

