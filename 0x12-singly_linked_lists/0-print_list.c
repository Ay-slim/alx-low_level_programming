#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Prints all the elements in a linked list
 * @h: Pointer to linked list head
 * Return: Length of the linked list
 */
size_t print_list(const list_t *h)
{
	const list_t *node_ptr = h;
	unsigned int len = 0;
	char *null_str = "[0] (nil)";

	while (node_ptr != NULL)
	{
		if (node_ptr->str == NULL)
		{
			printf("%s\n", null_str);
		}
		else
		{
			printf("[%d] %s\n", node_ptr->len, node_ptr->str);
		}
		len++;
		node_ptr = node_ptr->next;
	}
	return (len);
}
