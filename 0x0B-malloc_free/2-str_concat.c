#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenate two strings
 * @s1: First string
 * @s2: Second string
 * Return: Null if failure. Pointer to concatenated string if success.
*/

char *str_concat(char *s1, char *s2)
{
	int len_1;
	int len_2;
	int combined_len;
	int i;
	char *concat_string;
	char *empty_string = "";

	if (!s1 || s1 == empty_string)
		len_1 = 0;
	else
		len_1 = strlen(s1);
	if (!s2 || s2 == empty_string)
		len_2 = 0;
	else
		len_2 = strlen(s2);
	combined_len = len_1 + len_2;
	concat_string = malloc((combined_len) * sizeof(char));
	for (i = 0; i <= combined_len; i++)
	{
		if (i < len_1)
		{
			concat_string[i] = s1[i];
		}
		else
		{
			concat_string[i] = s2[i - len_1];
		}
	}
	return (concat_string);
}
