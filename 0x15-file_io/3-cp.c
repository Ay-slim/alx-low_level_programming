#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * setup_holder - Sets up a pointer to a holder for the file name
 * @name: file name
 * Return: Returns a pointer to the buffer
 */
char *setup_holder(char *name)
{
	char *bfr;

	bfr = malloc(sizeof(char) * 1024);
	if (!bfr)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
		exit(99);
	}
	return (bfr);
}

/**
 * closer - Helper to close a file
 * @desc: File descriptor
 */
void closer(int desc)
{
	int ret_val;

	ret_val = close(desc);
	if (ret_val == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", desc);
		exit(100);
	}
}

/**
 * main - Copies from one file to the other
 * @argc: Number of arguments
 * @argv: Array of args
 * Return: 0 if successful, 97, 98, or 99 on failure
 */
int main(int argc, char **argv)
{
	int source, sink, opened_file, written_file;
	char *bfr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	bfr = setup_holder(argv[2]);
	source = open(argv[1], O_RDONLY);
	opened_file = read(source, bfr, 1024);
	sink = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (source == -1 || opened_file == -1)
		{
			dprintf(STDERR_FILENO,
					"Error, Can't read from file %s\n", argv[1]);
			free(bfr);
			exit(98);
		}
		written_file = write(sink, bfr, opened_file);
		if (sink == -1 || written_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(bfr);
			exit(99);
		}
		opened_file = read(source, bfr, 1024);
		sink = open(argv[2], O_WRONLY | O_APPEND);
	} while (opened_file > 0);
	free(bfr);
	closer(source);
	closer(sink);
	return (0);
}
