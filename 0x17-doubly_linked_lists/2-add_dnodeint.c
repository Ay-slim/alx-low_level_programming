#include "lists.h"

/**
 * add_dnodeint - Add a node at start of doubly linkedlist
 * @head: Pointer to head pointer
 * @n: Int data to add
 * Return: Ponter to new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
