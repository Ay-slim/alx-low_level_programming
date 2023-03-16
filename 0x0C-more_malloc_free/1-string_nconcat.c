#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First character
 * @s2: Second character
 * @n: Buffer size
 * Return: Pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len;
	unsigned int resv_len;
	unsigned int i;
	char *scat;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	s1_len = strlen(s1);
	resv_len = s1_len + n + 1;
	scat = malloc(resv_len);
	if (!scat)
		return (NULL);
	for (i = 0; i < resv_len; i++)
	{
		if (i == resv_len - 1)
			*(scat + i) = '\0';
		if (i < s1_len)
		{
			*(scat + i) = s1[i];
		}
		else
		{
			*(scat + i) = s2[i - s1_len];
		}
	}
	return (scat);
}
