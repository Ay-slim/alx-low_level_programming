#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - Prints list int
 * @h: Pointer to listint
 * Return: Size of listint
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;
	const listint_t *next_ptr = h;

	if (h == NULL)
		return (0);
	while (next_ptr != NULL)
	{
		len++;
		next_ptr = next_ptr->next;
	}
	return (len);
}
