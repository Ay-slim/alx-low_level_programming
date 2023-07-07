#include "hash_tables.h"

/**
 * hash_table_print - Print hash table
 * @ht: Hash table to print
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *elem;
	int comma_check = 0;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		elem = ht->array[i];
		while (elem)
		{
			if (comma_check)
				printf(", ");
			printf("'%s': '%s'", elem->key, elem->value);
			comma_check = 1;
			elem = elem->next;
		}
		i++;
	}
	printf("}\n");
}
