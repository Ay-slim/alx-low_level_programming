#include "lists.h"

/**
 * get_dnodeint_at_index - Get node at index
 * @head: Pointer to list head
 * @index: Index to check
 * Return: Pointer to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		if (index == i)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
