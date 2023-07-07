#include "hash_tables.h"
/**
 * hash_table_get - Retrieve a value via key
 * @ht: Hash table
 * @key: Key to retrieve
 * Return: Value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *elem = ht->array[idx];

	while (elem)
	{
		if (strcmp(key, elem->key) == 0)
			return (elem->value);
		elem = elem->next;
	}
	return (NULL);
}
