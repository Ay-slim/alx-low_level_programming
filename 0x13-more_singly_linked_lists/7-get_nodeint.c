#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find node at index
 * @head: Pointer to head node's address
 * @index: Index of desired node
 * Return: Node at specified index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int tracker = 0;

	if (index == 0)
		return (head);
	while (head)
	{
		tracker++;
		head = head->next;
		if (tracker == index)
			return (head);
	}
	return (NULL);
}
