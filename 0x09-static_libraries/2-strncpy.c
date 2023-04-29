#include "main.h"
#include <string.h>

/**
 * _strncpy - Function to copy one string to another
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Number of characters to copy
 * Return: Pointer to concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
