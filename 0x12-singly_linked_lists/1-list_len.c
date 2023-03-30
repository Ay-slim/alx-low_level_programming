#include "lists.h"
#include <stddef.h>

/**
 * list_len - Returns the number of elements in a list_t linked list
 * @h: Pointer to linked list head
 * Return: Length of the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *node_ptr = h;
	unsigned int len = 0;

	while (node_ptr != NULL)
	{
		len++;
		node_ptr = node_ptr->next;
	}
	return (len);
}
