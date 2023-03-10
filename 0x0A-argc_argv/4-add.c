#include <stdio.h>
#include <stdlib.h>

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
		if (!atoi(argv[i]))
		{
			printf("%s\n", ERR_MSG);
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
