#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete node from index
 * @head: Pointer to list head
 * @index: Index to delete from
 * Return: 1 if successful -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *del;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		del = *head;
		(*head) = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(del);
		return (1);
	}
	while (tmp)
	{
		if (i == index - 1)
			break;
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (-1);
	if (tmp->next->next == NULL)
	{
		del = tmp->next;
		tmp->next = NULL;
		free(del);
		return (1);
	}
	del = tmp->next;
	tmp->next = tmp->next->next;
	tmp->next->prev = tmp;
	free(del);
	return (1);
}
