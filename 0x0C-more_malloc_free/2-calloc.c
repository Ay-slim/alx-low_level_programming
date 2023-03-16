#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array
 * @nmemb: Number of members
 * @size: Size of each member
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	void **alloc_mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	alloc_mem = malloc(nmemb * sizeof(void *));
	if (!alloc_mem)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		alloc_mem[i] = malloc(size);
		if (!alloc_mem[i])
		{
			for (j = 0; j < i; j++)
				free(alloc_mem[j]);
			return (NULL);
		}
	}
	return (alloc_mem);
}
