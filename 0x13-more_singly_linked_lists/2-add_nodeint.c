#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a node at the start of a linkedlist
 * @head: A pointer to the pointer pointing to the head of the ll
 * @n: The number in the node to insert into the ll
 * Return: Address to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->next = *head;
	temp->n = n;
	*head = temp;
	return (*head);
}
