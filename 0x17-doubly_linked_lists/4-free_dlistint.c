#include "lists.h"

/**
 * free_dlistint - Free a doubly linked list
 * @head: Pointer to doubly linked list head
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tortoise = head;
	dlistint_t *hare = head;

	while (tortoise)
	{
		tortoise = hare->next;
		free(hare);
		hare = tortoise;
	}
}
