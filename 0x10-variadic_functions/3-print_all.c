#include "variadic_functions.h"
#include "stdio.h"
#include "string.h"
#include "stdarg.h"

/**
 * print_char - char print
 * @ap: Variable argument index
 * Return: Nothing
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - int print
 * @ap: Variable argument index
 * Return: Nothing
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - float print
 * @ap: Variable argument index
 * Return: Nothing
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - string print
 * @ap: Variable argument index
 * Return: Nothing
 */
void print_string(va_list ap)
{
	char *str = va_arg(ap, char*);
	if (!str)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Print all
 * *@format: Format
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int op_len;
	unsigned int i = 0;
	typ_t ops[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};
	unsigned int f_len = strlen(format);
	char tmplt[] = "cifs";
	char *comma = "";

	va_start(ap, format);
	while (i < f_len)
	{
		op_len = 0;
		while (op_len < 4 && format[i] != tmplt[op_len])
		{
			op_len++;
		}
		if (op_len < 4)
		{
			printf("%s", comma);
			ops[op_len].f(ap);
			comma = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
