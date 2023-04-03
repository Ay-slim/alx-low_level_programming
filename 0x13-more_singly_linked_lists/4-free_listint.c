#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - List to free
 * @head: Head of list to free
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *holder;

	while (head)
	{
		holder = head->next;
		free(head);
		head = holder;
	}
}
