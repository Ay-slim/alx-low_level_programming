#include <string.h>
#include "main.h"

/**
 * puts_half - Function to print half of a string
 * @str: String to print
 * Return: Nothing
 */

void puts_half(char *str)
{
	int length;
	int starting_index;

	length = strlen(str);
	starting_index = length / 2;
	if (length % 2 != 0)
	{
		starting_index++;
	}
	while (starting_index < length)
	{
		_putchar(str[starting_index]);
		starting_index++;
	}
	_putchar('\n');
}
