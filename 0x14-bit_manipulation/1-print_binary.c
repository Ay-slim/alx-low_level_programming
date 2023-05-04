#include "main.h"
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
 * print_listint - Prints list int
 * @h: Pointer to listint
 * Return: Size of listint
 */
size_t print_listint(const listint_t *h)
{
	unsigned int len = 0;
	const listint_t *next_ptr = h;

	while (next_ptr != NULL)
	{
		_putchar(next_ptr->n + '0');
		len++;
		next_ptr = next_ptr->next;
	}
	return (len);
}

/**
 * print_binary - Print a number in binary
 * @n: Number to convert
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	listint_t *head;
	int bit;

	head = NULL;
	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}
	while (n)
	{
		bit = n - ((n >> 1) * 2);
		add_nodeint(&head, bit);
		n = n >> 1;
	}
	print_listint(head);
}
