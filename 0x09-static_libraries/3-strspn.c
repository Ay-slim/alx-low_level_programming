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
 * _strspn - Function to get the length of a prefix substring
 * @s: Origin string
 * @accept: Bytes to check from
 * Return: Length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int s_len = strlen(s);
	unsigned int i = 0;

	while (i <= s_len)
	{
		if (!in(s[i], accept))
			return (i);
		i++;
	}
	return (i);
}
