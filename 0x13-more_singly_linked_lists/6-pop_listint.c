#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete head node
 * @head: Pointer to head's address
 * Return: Head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *holder = *head;
	int head_value = holder->n;

	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	free(holder);
	return (head_value);
}
