#include "lists.h"
#include <string.h>

/**
 * add_node_end - function to add a new node at the end
 * @head: node head
 * @str: element
 *
 * Return: the adress of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *lastnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	lastnode = *head;

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
