#include "main.h"

/**
 * print_alphabet - prints all letters of the alphabet
 *
 * Return: Void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
