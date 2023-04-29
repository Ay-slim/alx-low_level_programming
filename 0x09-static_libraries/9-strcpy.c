#include <string.h>
#include "main.h"

/**
 * _strcpy - Function to copy a string
 * @src: Source string
 * @dest: Destination string
 * Return: A pointer to the destination string
 */

char *_strcpy(char *dest, char *src)
{
	int length;
	int counter;

	counter = 0;
	length = strlen(src);
	while (counter <= length)
	{
		dest[counter] = src[counter];
		counter++;
	}
	return (dest);
}
