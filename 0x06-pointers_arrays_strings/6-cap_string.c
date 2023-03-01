#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include "main.h"

/**
 * is_separator - Function to check if character is a separator
 * @p: Character to check
 * Return: Boolean indicating whether or not character should be capitalized
 */

bool is_separator(char p)
{
	bool FI;
	bool SE;
	bool TH;

	FI = p == ' ' || p == '\t' || p == '\n' || p == ',' || p == ';';
	SE = p == '.' || p == '!' || p == '?' || p == '"' || p == '(';
	TH = p == ')' || p == '{' || p == '}';
	return (FI || SE || TH);
}

/**
 * cap_string - Selectively capitalizes characters in a string
 * @s: String to capitalize
 * Return: Capitalized string
 */

char *cap_string(char *s)
{
	int len;
	int i;

	i = 1;
	len = strlen(s);
	if (isalpha(s[0]))
	{
		s[0] = toupper(s[0]);
	}
	while (i < len)
	{
		if (isalpha(s[i]) && is_separator(s[i - 1]))
		{
			s[i] = toupper(s[i]);
		}
		i++;
	}
	return (s);
}
