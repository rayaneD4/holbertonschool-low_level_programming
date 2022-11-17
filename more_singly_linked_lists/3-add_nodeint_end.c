# include "lists.h"

/**
 * add_nodeint_end - function to add a new node at the end
 * @head: node head
 * @n: new node
 *
 * Return: 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode = *head;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (lastnode->next)
		{
			lastnode = lastnode->next;
		}
	lastnode->next = newnode;
	}
	return (newnode);
}
