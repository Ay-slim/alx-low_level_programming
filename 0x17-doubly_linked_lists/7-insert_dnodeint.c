#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert node at index
 * @h: Pointer to head
 * @idx: Index to insert at
 * @n: Value to insert
 * Return: Pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *hold = *h;
	unsigned int i = 0;
	dlistint_t *new;

	if (*h == NULL || idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (hold)
	{
		if (i == idx - 1)
			break;
		i++;
		hold = hold->next;
	}
	if (hold == NULL)
		return (NULL);
	if (hold->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = hold;
	new->next = hold->next;
	hold->next = new;
	hold = hold->next;
	hold->prev = new;
	return (new);
}
