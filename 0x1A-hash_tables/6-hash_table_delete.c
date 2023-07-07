#include "hash_tables.h"

/**
 * hash_table_delete - Delete hash table
 * @ht: Hash table to print
 * Return: Nothing
 */
void hash_table_delete(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *elem;
	hash_node_t *elem_del;

	if (!ht)
		return;
	while (i < ht->size)
	{
		elem = ht->array[i];
		while (elem)
		{
			elem_del = elem;
			elem = elem->next;
			free(elem_del->key);
			free(elem_del->value);
			free(elem_del);
		}
		i++;
	}
	free(ht->array);
	free((hash_table_t *)ht);
}
