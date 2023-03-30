#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - Add node at the end
 * @head: Pointer to pointer to linked list head
 * @str: String to put in node
 * Return: Address of neew element or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_ptr = *head;
	list_t *node_to_add = malloc(sizeof(list_t));

	if (node_to_add == NULL)
		return (NULL);
	node_to_add->str = strdup(str);
	node_to_add->len = strlen(str);
	node_to_add->next = NULL;
	if (*head == NULL)
	{
		*head = node_to_add;
		return (*head);
	}
	while (node_ptr != NULL)
	{
		node_ptr = node_ptr->next;
	}
	node_ptr->next = node_to_add;
	return (*head);
}
