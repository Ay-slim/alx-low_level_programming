#include <string.h>
#include "main.h"

/**
 * swap_char - Function to swap two characters
 * @a: Pointer to first character
 * @b: Pointer to second character
 * Return: nothing
 */

void swap_char(char *a, char *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * rev_string - Reverses a string (in place)
 * @s: String to reverse
 * Return: Nothing
 */

void rev_string(char *s)
{
	int length;
	char *first_char;
	char *second_char;
	int start_index;
	int end_index;

	length = strlen(s);
	end_index = length - 1;
	start_index = 0;
	while (start_index < length / 2)
	{
		first_char = &(s[start_index]);
		second_char = &(s[end_index]);
		swap_char(first_char, second_char);
		start_index++;
		end_index--;
	}
}
