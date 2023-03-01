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
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (dest);
}
