#include "main.h"
#include <string.h>

/**
 * _memset - Function to fill memory with a constant byte
 * @s: Pointer to memory address to be filled
 * @b: Constant byte
 * @n: number of bytes to fill
 * Return: Pointer to filled memory address
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
