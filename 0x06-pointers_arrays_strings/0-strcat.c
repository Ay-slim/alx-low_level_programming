#include "main.h"
#include <string.h>

/**
 * _strcat - Function to concantenate two strings
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * Return: Pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int src_len;
	int dest_len;
	int i;

	src_len = strlen(src);
	dest_len = strlen(dest);
	i = 0;
	while (i < src_len)
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	return (dest);
}
