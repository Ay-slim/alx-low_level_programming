#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Add all args
 * @separator: Separator value
 * @n: Size
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(ap, int));
			return;
		}
		printf("%d", va_arg(ap, int));
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
