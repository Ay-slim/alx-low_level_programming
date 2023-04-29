#include "main.h"

/**
 * _puts - Function to print a string
 * @str: String to print
 * Return: Nothing
 */

void _puts(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
