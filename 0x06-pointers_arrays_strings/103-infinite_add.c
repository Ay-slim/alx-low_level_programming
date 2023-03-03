#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * check_length - See if the sum length is more than buffer size
 * @a: Pointer to first character
 * @b: Pointer to second character
 * @size_r: Buffer size
 * Return: Integer shows whether the number of sum digits exceeds buffer size
 */

int check_length(char *a, char *b, int size_r)
{
	int nDigits;
	char sum_str[200];
	int n1 = atoi(a);
	int n2 = atoi(b);
	int sum = n1 + n2;

	sprintf(sum_str, "%d", sum);
	nDigits = strlen(sum_str);
	return (nDigits >= size_r);
}

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

/**
 * string_add - Helper function to add two numbers represented as strings
 * @n1: Longer number
 * @n2: Shorter number
 * @r: Buffer to store the sum
 * @max_len: The length of the longer between both input strings
 * @min_len: The length of the shorter between both input strings
 * Return: Void
 */

void string_add(char *n1, char *n2, char *r, int max_len, int min_len)
{
	int i = max_len;
	int j = min_len;
	int end_index = 0;
	int sum = 0;
	int rem = 0;
	int n1int = 0;
	int n2int = 0;
	char sumchar;
	char remchar;

	r[0] = '\0';
	while (i >= 0)
	{
		n1int = n1[i] - '0';
		n2int = j >= 0 ? n2[j] - '0' : 0;
		sum = n1int + n2int + rem;
		rem = sum >= 10 ? 1 : 0;
		sum = sum >= 10 ? sum - 10 : sum;
		sumchar = sum + '0';
		if (i == 0 && rem > 0)
		{
			end_index += 2;
			remchar = rem + '0';
			r[end_index - 2] = sumchar;
			r[end_index - 1] = remchar;
			r[end_index] = '\0';
		}
		else
		{
			end_index += 1;
			r[end_index - 1] = sumchar;
			r[end_index] = '\0';
		}
		i--;
		j--;
	}
}

/**
 * infinite_add - Function to add two numbers represented as strings
 * @n1: First number
 * @n2: Second number
 * @r: Sum buffer
 * @size_r: Buffer size
 * Return: Pointer to the sum if the buffer can contain it, otherwise 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_len;
	int n2_len;
	int max_len;
	int min_len;
	char *longer_char;
	char *shorter_char;

	if (check_length(n1, n2, size_r))
		return (0);
	n1_len = strlen(n1);
	n2_len = strlen(n2);
	if (n1_len >= n2_len)
	{
		max_len = n1_len - 1;
		min_len = n2_len - 1;
		longer_char = n1;
		shorter_char = n2;
	}
	else
	{
		max_len = n2_len - 1;
		min_len = n1_len - 1;
		longer_char = n2;
		shorter_char = n1;
	}
	string_add(longer_char, shorter_char, r, max_len, min_len);
	rev_string(r);
	return (r);
}
