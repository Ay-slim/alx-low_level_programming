#include "main.h"
#include <string.h>

/**
 * in - Function to check if a charcter is in a string
 * @c: character
 * @s: string
 * Return: 0 if not in, 1 if in
 */

int in(char c, char *s)
{
	int s_len;
	int i;

	s_len = strlen(s);
	i = 0;
	while (i < s_len)
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: String to search
 * @accept: Set of bytes
 * Return: Pointer to byte in S
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int s_len = strlen(s);
	unsigned int i = 0;

	while (i <= s_len)
	{
		if (in(s[i], accept))
			return (&s[i]);
		i++;
	}
	return (NULL);
}
