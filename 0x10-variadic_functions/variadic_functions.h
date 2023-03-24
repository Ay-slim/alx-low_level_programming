#include <stdarg.h>
#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
 * struct typ - Struct typ
 *
 * @t: Arg type
 * @f: Printf format
 */
typedef struct typ
{
	char t;
	void (*f)(va_list);
} typ_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
