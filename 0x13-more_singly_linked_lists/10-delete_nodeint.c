#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Delete node at index
 * @head: Pointer to head node's address
 * @index: Index of desired node to delete
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int tracker = 0;
	listint_t *head_clone = *head;

	if (*head == NULL)
	{
		free(head_clone);
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	while (head_clone)
	{
		tracker++;
		if (tracker == index)
		{
			head_clone->next = (head_clone->next)->next;
			return (1);
		}
		head_clone = head_clone->next;
	}
	return (-1);
}
