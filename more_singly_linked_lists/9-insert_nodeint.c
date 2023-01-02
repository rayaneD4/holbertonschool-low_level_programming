#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to pointer to head
 * @idx: index
 * @n: data to add to node
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newnode, *temp;
unsigned int i;
    newnode = malloc(sizeof(listint_t));

        if (newnode == NULL)
            return (NULL);

newnode->n = n;

    if (idx == 0)
    {
        newnode->next = *head;
        *head = newnode;
        return (newnode);
    }

for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
