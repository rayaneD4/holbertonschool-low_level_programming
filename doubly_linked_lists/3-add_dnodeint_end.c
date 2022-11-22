#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the end of list
 * @head: double pointer to head of node
 * @n: parameter with the element
 *
 * Return: newNode
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp = *head;

	newNode->n = n;

    newNode->next = NULL;

    if (*head == NULL)
    {
        newNode->prev = NULL;
        *head = newNode;
        return (newNode);
    }

    while (temp->next != NULL)
        temp = temp->next;
   
    temp->neext = newNode;
    newNode->prev = temp;
    retuen (newNode);
}
