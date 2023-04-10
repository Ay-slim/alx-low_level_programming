#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Copies from one file to the other
 * @argc: Number of arguments
 * @argv: Array of args
 * Return: 0 if successful, 97, 98, or 99 on failure
 */
int main(int argc, char **argv)
{
	ssize_t source, sink, opened_file, written_file;
	char *bfr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	bfr = malloc(sizeof(char) * 1024);
	if (!bfr)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	source = open(argv[1], O_RDONLY);
	opened_file = read(source, bfr, 1024);
	sink = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (opened_file > 0)
	{
		if (source == -1 || opened_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(bfr);
			exit(99);
		}
		written_file = write(source, bfr, opened_file);
		if (sink == -1 || written_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(bfr);
			exit(99);
		}
		opened_file = read(source, bfr, 1024);
		sink = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(bfr);
	close(source);
	close(sink);
	return (0);
}
