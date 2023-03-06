#include "main.h"
#include <string.h>

/**
 * _strchr - Function to return the first occurrence of a character
 * @s: Pointer to string to search
 * @c: Character to search for
 * Return: Pointer to character location
 */

char *_strchr(char *s, char c)
{
	int s_len;
	int i;

	s_len = strlen(s);
	i = 0;
	while (i <= s_len)
	{
		if (s[i] == c)
			return (&(s[i]));
		i++;
	}
	return (NULL);
}
