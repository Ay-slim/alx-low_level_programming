#include "lists.h"

/**
 * add_dnodeint_end - Add node at end of doubly linked list
 * @head: Linkedlist head
 * @n: Node value to add
 * Return: Pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *holder = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (holder == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (holder->next)
	{
		holder = holder->next;
	}
	holder->next = new;
	new->prev = holder;
	return (new);
}
