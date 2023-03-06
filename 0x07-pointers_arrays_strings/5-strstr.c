#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: String to search
 * @accept: Set of bytes
 * Return: Pointer to byte in S
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int j;
	unsigned int needle_index;
	unsigned int all_match;
	unsigned int hay_len = strlen(haystack);
	unsigned int needle_len = strlen(needle);
	unsigned int i = 0;

	if (!*needle)
		return haystack;
	while (i <= hay_len - needle_len)
	{
		all_match = 1;
		needle_index = 0;
		j = i;
		while (j < i + needle_len)
		{
			printf("Haystack: %c, Needle: %c\n", haystack[j], needle[needle_index]);
			if (haystack[j] != needle[needle_index])
			{
				all_match = 0;
				break;
			}
			j++;
			needle_index++;
		}
		if (all_match)
			return (&(haystack[i]));
		i++;
	}
	return (NULL);
}
