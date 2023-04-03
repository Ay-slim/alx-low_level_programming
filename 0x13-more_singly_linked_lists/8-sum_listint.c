#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Find sum of all node values
 * @head: Pointer to head node's address
 * Return: Node at specified index
 */
int sum_listint(listint_t *head)
{
	unsigned int tracker = 0;

	while (head)
	{
		tracker += head->n;
		head = head->next;
	}
	return (tracker);
}
