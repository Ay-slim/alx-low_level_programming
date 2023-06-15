#include "lists.h"

/**
 * dlistint_len - Calculate number of elements in a linkedlist
 * @h: Pointer to header
 * Return: Linkedlist size
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *head = (dlistint_t *)h;
	size_t i = 0;

	while (head)
	{
		i++;
		head = head->next;
	}
	return (i);
}
