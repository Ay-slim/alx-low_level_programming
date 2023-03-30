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
	list_t *last_node_ptr;

	if (node_ptr == NULL)
	{
		node_ptr = malloc(sizeof(list_t));
		if (node_ptr == NULL)
			return (NULL);
		node_ptr->str = strdup(str);
		node_ptr->len = strlen(str);
		node_ptr->next = NULL;
		return (node_ptr);
	}
	while (node_ptr != NULL)
	{
		node_ptr = node_ptr->next;
	}
	node_ptr->next = malloc(sizeof(list_t));
	if (node_ptr->next == NULL)
		return (NULL);
	last_node_ptr = node_ptr->next;
	last_node_ptr->str = strdup(str);
	last_node_ptr->len = strlen(str);
	last_node_ptr->next = NULL;
	return (last_node_ptr);
}
