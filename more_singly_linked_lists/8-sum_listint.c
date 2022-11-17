# include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: head node
 *
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0, tmp;

	if (head == NULL)
	return (0);

	while (head != NULL)
	{
		tmp = head->n;
		sum += tmp;
		head = head->next;
	}
	return (sum);
}
