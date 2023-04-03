#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add node at the end
 * @head: Pointer to pointer to linked list head
 * @n: Integer to put in node
 * Return: Address of neew element or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_ptr = *head;
	listint_t *node_to_add = malloc(sizeof(listint_t));

	if (node_to_add == NULL)
		return (NULL);
	node_to_add->n = n;
	node_to_add->next = NULL;
	if (*head == NULL)
	{
		*head = node_to_add;
		return (*head);
	}
	while (node_ptr->next != NULL)
	{
		node_ptr = node_ptr->next;
	}
	node_ptr->next = node_to_add;
	return (*head);
}
