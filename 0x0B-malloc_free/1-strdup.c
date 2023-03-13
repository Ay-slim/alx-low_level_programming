#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicate a string
 * @str: String to duplicate
 * Return: Null if failure. Pointer to dup string if success.
*/

char *_strdup(char *str)
{
	char *dup_str;
	int i;
	int len = strlen(str);

	if (str == NULL)
		return (NULL);
	dup_str = (char *)(malloc(len * sizeof(char)));
	for (i = 0; i < len; i++)
	{
		dup_str[i] = str[i];
	}
	return (dup_str);
}
