#include "main.h"
#include <string.h>

/**
 * pal_check - Check if a word is a palindrome
 * @s: String to check
 * @start: start_index
 * @end: end index
 * Return: 1 if palindrome 0 otherwise
 */
int pal_check(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);
	if (end - start <= 2)
		return (1);
	return (pal_check(s, start + 1, end - 1));
}

/**
 * is_palindrome - Check if a word is a palindrome
 * @s: String to check
 *
 * Return: 1 if palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (pal_check(s, 0, len - 1));
}
