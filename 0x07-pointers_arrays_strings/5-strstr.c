#include <string.h>
#include "main.h"

/**
 * _strstr - Locate a substring
 * @haystack: String to search
 * @needle: Set of bytes
 * Return: Pointer to starting point of needle in haystack. Null if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int j;
	unsigned int needle_index;
	unsigned int all_match;
	unsigned int hay_len = strlen(haystack);
	unsigned int needle_len = strlen(needle);
	unsigned int i = 0;

	while (i <= hay_len - needle_len)
	{
		all_match = 1;
		needle_index = 0;
		j = i;
		while (j < i + needle_len)
		{
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
