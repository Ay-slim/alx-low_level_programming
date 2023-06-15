#include "lists.h"

/**
 * sum_dlistint - Function to sum all the data in doubly linked list
 * @head: Linked list head
 * Return: Sum of data in linkedlist
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
