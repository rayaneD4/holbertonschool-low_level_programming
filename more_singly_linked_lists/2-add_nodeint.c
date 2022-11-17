#include "lists.h"

/**
 * add_node - function to add new node at the beginning
 * @head: head
 * @n: node
 * Return: 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
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
