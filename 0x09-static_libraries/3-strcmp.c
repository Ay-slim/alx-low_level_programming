#include "main.h"
#include <string.h>

/**
 * _strcmp - Function to compare two strings
 * @s1: Pointer to destination string
 * @s2: Pointer to source string
 * Return: Integer denoting comparison
 */

int _strcmp(char *s1, char *s2)
{
	int s1_len;
	int s2_len;
	int min_len;
	int i;

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (s1_len <= s2_len)
	{
		min_len = s1_len;
	}
	else
	{
		min_len = s2_len;
	}
	i = 0;
	while (i < min_len)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
