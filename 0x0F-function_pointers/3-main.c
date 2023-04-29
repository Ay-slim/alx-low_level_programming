#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main
 * @argc: Arg count
 * @argv: Array of arguments
 * Return: Nothing
 */
int main(int argc, char **argv)
{
	int numa;
	int numb;
	int result;
	char *operand = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!get_op_func(operand))
	{
		printf("Error\n");
		exit(99);
	}
	numa = atoi(argv[1]);
	numb = atoi(argv[3]);
	if ((*operand == '/' || *operand == '%') && numb == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(operand)(numa, numb);
	printf("%d\n", result);
	return (0);
}
