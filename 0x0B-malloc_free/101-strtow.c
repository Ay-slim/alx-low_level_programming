#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * strtow - Splits a string into words
 * @str: String
 * Return: Split string
*/

char **strtow(char *str)
{
	char **full_str;
	char temp_str[2000];
	char *temp_ptr = &(temp_str[0]);
	int inner_size;
	unsigned int i;
	int j;
	int k;
	char *empty_str = "";
	int temp_ind = 0;
	int inner = 0;
	int outer = 0;
	int mult = 0;
	int multi = 1;
	int inner_ind = 0;
	unsigned int len = strlen(str);

	if (str == NULL || str == empty_str)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (i == len)
			*(temp_ptr + i) = '\0';
		if (str[i] != ' ')
		{
			*(temp_ptr + temp_ind) = str[i];
			inner++;
			temp_ind++;
		}
		if (str[i] == ' ' && i > 0 && str[i - 1] && str[i - 1] != ' ')
		{
			outer += 1;
			mult += inner * multi;
			multi *= 10;
			inner = 0;
			*(temp_ptr + temp_ind) = '\0';
			*(temp_ptr + (temp_ind + 1)) = ' ';
			temp_ind += 3;
		}
	}
	full_str = malloc(outer * sizeof(char *));
	if (!full_str)
		return (NULL);
	for (j = 0; j < outer; j++)
	{
		if (j == outer - 1)
		{
			inner_size = (mult % 10) + 1;
		}
		else
		{
			inner_size = (mult % 10) + 2;
		}
		full_str[j] = malloc(inner_size * sizeof(char));
		if (!full_str[j])
			return (NULL);
		for (k = 0; k <= inner_size; k++)
		{
			full_str[j][k] = *(temp_ptr + inner_ind);
			inner_ind++;
		}	
		mult /= 10;
	}
	return (full_str);
}
