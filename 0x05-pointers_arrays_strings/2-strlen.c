#include "main.h"

/**
 * _strlen - Function to return the length of a string
 * @s: Array of strings
 * Return: The length of the passed string s
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
