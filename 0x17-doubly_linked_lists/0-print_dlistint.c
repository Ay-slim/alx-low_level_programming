#include "lists.h"

/**
 * print_dlistint - Prints elements of a doubly linked list
 * @h: Pointer to head node
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *head = (dlistint_t *)h;
	size_t i = 0;

	while (head)
	{
		printf("%d\n", head->n);
		i++;
		head = head->next;
	}
	return (i);
}
