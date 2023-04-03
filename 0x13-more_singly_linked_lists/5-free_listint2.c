#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - List to free
 * @head: Head of list to free
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *holder;
	listint_t *head_clone = *head;

	while (head_clone)
	{
		holder = head_clone->next;
		free(head_clone);
		head_clone = holder;
	}
}
