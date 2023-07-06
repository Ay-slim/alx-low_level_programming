#include "hash_tables.h"

/**
 * key_index - Function to return key index
 * @key: Key to value whose index is to be found
 * @size: Hash table size
 * Return: Key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
