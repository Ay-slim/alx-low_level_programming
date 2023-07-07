#include "hash_tables.h"
/**
 * hash_table_set - Insert node into hash table
 * @ht: Hash table
 * @key: New node key
 * @value: New node value
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *elem = ht->array[idx];
	char *key_t = strdup(key);
	char *value_t = strdup(value);
	hash_node_t *new_elem = malloc(sizeof(hash_node_t));

	if (!new_elem)
		return (0);
	if (!ht || !value || !key || strcmp(key_t, "") == 0)
	{
		free(key_t);
		free(value_t);
		free(new_elem);
		return (0);
	}
	new_elem->key = key_t;
	new_elem->value = value_t;
	new_elem->next = NULL;
	if (elem == NULL)
	{
		ht->array[idx] = new_elem;
		return (1);
	}
	while (elem)
	{
		if (strcmp(key_t, elem->key) == 0)
		{
			free(elem->value);
			elem->value = value_t;
			free(key_t);
			free(new_elem);
			return (1);
		}
		elem = elem->next;
	}
	new_elem->next = ht->array[idx];
	ht->array[idx] = new_elem;
	return (1);
}
