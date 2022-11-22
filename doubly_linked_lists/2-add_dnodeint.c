#include "lists.h"

/**
 * add_nodeint - function to add new node at the beginning
 * @head: head
 * @n: node
 * Return: 0
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
