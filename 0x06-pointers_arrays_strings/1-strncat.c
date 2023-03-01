#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - Function to concantenate two strings up to the src nth character
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Max no. of characters to copy
 * Return: Pointer to concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	dest_len = strlen(dest);
	for (i = dest_len; i < dest_len + n; i++)
	{
		dest[i] = src[i - dest_len];
		if (src[i - dest_len] == '\0')
			break;
	}
	return (dest);
}
