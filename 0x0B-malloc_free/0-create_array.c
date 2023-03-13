#include <stdlib.h>

/**
 * create_array - Creates an array of chars. Initializes with one.
 * @size: Size of char
 * @c: char
 * Return: Null if size is 0 or failure. Pointer to array if success.
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);
	str = (char *)(malloc(size * sizeof(char)));
	if (str)
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		return (str);
	}
	free(str);
	return (NULL);
}
