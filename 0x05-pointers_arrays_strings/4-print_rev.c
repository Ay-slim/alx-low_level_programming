#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to print in reverse
 * Return: Nothing
 */

void print_rev(char *s)
{
	int length;

	length = strlen(s);
	while (length > 0)
	{
		_putchar(s[length - 1]);
		length--;
	}
	_putchar('\n');
}
