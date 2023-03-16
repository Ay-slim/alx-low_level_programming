#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory to allocate
 * Return: Pointer to reserved memory
 */

void *malloc_checked(unsigned int b)
{
	void *res_ptr;

	res_ptr = malloc(b);
	if (!res_ptr)
	{
		exit(98);
	}
	return (res_ptr);
}
