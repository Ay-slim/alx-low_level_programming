#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * rot13 - Function to encode a string using rot13
 * @src: Pointer to source string
 * Return: Pointer to encoded string
 */

char *rot13(char *src)
{
	int i;
	int len;
	bool m_check;

	i = 0;
	len = strlen(src);
	while (i < len)
	{
		m_check = toupper(src[i]) > 'M' && toupper(src[i]) <= 'Z';
		if (isalpha(src[i]) && m_check)
		{
			src[i] = src[i] - 13;
		}
		else if (isalpha(src[i]))
		{
			src[i] = src[i] + 13;
		}
		i++;
	}
	return (src);
}
