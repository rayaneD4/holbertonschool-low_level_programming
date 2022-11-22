#include "lists.h"

/**
 * add_nodeint - function to add new node at the beginning
 * @head: head
 * @n: node
 * Return: 0
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;

	*head = newnode;

	return (newnode);
}
