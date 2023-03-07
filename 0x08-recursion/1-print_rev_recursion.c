#include "main.h"
#include <string.h>

/**
 * rec_print - Prints recursively
 * @s: String
 * @n: current index
 * Return: Nothing.
 */
void rec_print(char *s, int n)
{
	if (n < 0)
	{
		return;
	}
	_putchar(s[n]);
	rec_print(s, n - 1);
}

/**
 * _print_rev_recursion - prints string recursively
 * @s: string to print
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	int n = strlen(s);

	rec_print(s, n - 1);
}
