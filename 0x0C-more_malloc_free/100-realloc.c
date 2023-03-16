#include <stdlib.h>
#include <string.h>
#define _GNU_SOURCE
#include <sys/mman.h>

/**
 * _realloc - Reallocate memory
 * @ptr: Current memory address
 * @old_size: current size
 * @new_size: new size
 * Return: Pointer to newly reserved memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (!ptr)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	for (i = 0; i < old_size; i++)
	{
		new_ptr[i] = ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
