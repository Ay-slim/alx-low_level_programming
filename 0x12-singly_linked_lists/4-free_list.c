#include "lists.h"
#include <stdlib.h>

/**
 * free_list - List to free
 * @head: Head of list to free
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *holder;

	while(head)
	{
		holder = head->next;
		free(head->str);
		free(head);
		head = holder;
	}
}
