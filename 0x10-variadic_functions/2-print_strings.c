#include <stdarg.h>
#include <stdio.h>

/**
 * _putstring - Print each string
 * @str: String
 * @flag: End or nah
 * Return: Nothing
 */
void _putstring(char *str, int flag)
{
	if (!str)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", str);
	}
	if (flag)
		printf("\n");
}

/**
 * print_strings - Print strings
 * @separator: Separator value
 * @n: Size
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			_putstring(va_arg(ap, char*), 1);
			return;
		}
		_putstring(va_arg(ap, char*), 0);
		if (!separator)
		{
			continue;
		}
		else
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
}
