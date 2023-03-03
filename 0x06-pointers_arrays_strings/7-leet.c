#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include "main.h"

/**
 * replace_val - Function to return the character to replace a char with
 * @c: Character to check
 * Return: Character to place at desired index
 */

char replace_val(char c)
{
	int i;
	char strings[5];
	char nums[5];

	i = 0;
	strings[0] = 'A';
	strings[1] = 'E';
	strings[2] = 'O';
	strings[3] = 'T';
	strings[4] = 'L';
	nums[0] = '4';
	nums[1] = '3';
	nums[2] = '0';
	nums[3] = '7';
	nums[4] = '1';
	while (i < 5)
	{
		if (isalpha(c) && toupper(c) == strings[i])
		{
			return (nums[i]);
		}
		i++;
	}
	return (c);
}

/**
 * leet - Function to return a string encoded into 1337
 * @s: String to encode
 * Return: Encoded string
 */

char *leet(char *s)
{
	int len;
	int i;

	i = 0;
	len = strlen(s);
	while (i < len)
	{
		s[i] = replace_val(s[i]);
		i++;
	}
	return (s);
}
