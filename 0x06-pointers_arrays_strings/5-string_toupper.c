#include "main.h"
#include <string.h>

/**
 * string_toupper - Function to convert all strings to uppercase
 * @str: Pointer to destination string
 * Return: Pointer to the string in upper case
 */

char *string_toupper(char *str)
{
	int str_len;
	int i;

	i = 0;
	str_len = strlen(str);
	while (i < str_len)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
