#include "hash_tables.h"

/**
 * hash_table_create - Function to create hash table
 * @size: Hash table size
 * Return: Pointer to create hash table, NULL if failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table_ptr = malloc(sizeof(hash_table_t));
	unsigned int i = 0;

	if (!table_ptr)
		return (NULL);
	table_ptr->size = size;
	table_ptr->array = calloc(size, sizeof(hash_node_t));
	if (!table_ptr->array)
	{
		free(table_ptr);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table_ptr->array[i] = NULL;
	return (table_ptr);
}
