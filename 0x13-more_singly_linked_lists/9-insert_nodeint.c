#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a node at the start of a linkedlist
 * @head: A pointer to the pointer pointing to the head of the ll
 * @n: The number in the node to insert into the ll
 * Return: Address to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->next = *head;
	temp->n = n;
	*head = temp;
	return (*head);
}

/**
 * insert_nodeint_at_index - Insert node at index
 * @head: Pointer to head node's address
 * @idx: Index of desired node
 * @n: Value to insert
 * Return: Node at specified index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int tracker = 0;
	listint_t *holder;
	listint_t *head_clone = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(head_clone);
		return (NULL);
	}
	if (*head == NULL)
		return (NULL);
	if (idx == 0)
		return (add_nodeint(head, n));
	new_node->n = n;
	while (head_clone)
	{
		tracker++;
		if (tracker == idx)
		{
			holder = head_clone->next;
			head_clone->next = new_node;
			new_node->next = holder;
			return (new_node);
		}
		head_clone = head_clone->next;
	}
	return (NULL);
}
