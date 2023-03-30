#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a node at the start of a linkedlist
 * @head: A pointer to the pointer pointing to the head of the ll
 * @str: The string in the node to insert into the ll
 * Return: Address to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->next = *head;
	temp->str = strdup(str);
	temp->len = strlen(str);
	*head = temp;
	return (*head);
}
