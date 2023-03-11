#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check_chars - Check if there are any non digit chars
 * @str: Input string to check
 * Return: 0 if there are non digits. 1 otherwise
 */

int check_chars(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (!isdigit(*(str + i)))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Prints arguments
 * @argc: Argument count
 * @argv: Arguments vector
 * Return: 0 if valid num of args, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i;
	char *ERR_MSG = "Error";
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]) || !check_chars(argv[i]))
		{
			printf("%s\n", ERR_MSG);
			return (1);
		}
		if (atoi(argv[i]) < 0)
		{
			sum += 0;
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
