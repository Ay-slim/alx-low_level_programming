#include "main.h"

/**
 * puts2 - Function to print every other character in a string
 * @str: String to print
 * Return: Nothing
 */

void puts2(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		if (length % 2 == 0)
		{
			_putchar(str[length]);
		}
		length++;
	}
	_putchar('\n');
}
