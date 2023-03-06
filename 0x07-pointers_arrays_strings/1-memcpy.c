#include "main.h"
#include <string.h>

/**
 * _memcpy - Copies n bytes from memory area src to dest
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Number of bytes to copy
 * Return: Pointer to destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		if (src[i] == '\0')
			break;
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
