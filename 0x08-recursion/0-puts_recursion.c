#include "main.h"

/**
 * rec_print - Prints recursively
 * @s: String
 * @n: current index
 * Return: Nothing.
 */
void rec_print(char *s, int n)
{
	if (s[n] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[n]);
	rec_print(s, n + 1);
}

/**
 * _puts_recursion - prints string recursively
 * @s: string to print
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	rec_print(s, 0);
}
