#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a specified text file
 * @filename: Filename to read
 * @letters: Letters to read from file
 * Return: Written file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opened_file;
	ssize_t read_file;
	ssize_t written_file;
	char *bfr;

	if (!filename)
		return (0);

	opened_file = open(filename, O_RDONLY);
	if (opened_file == -1)
		return (0);

	bfr = malloc(sizeof(char) * letters);
	if (!bfr)
	{
		close(opened_file);
		return (0);
	}
	read_file = read(opened_file, bfr, letters);
	if (read_file == -1)
	{
		free(bfr);
		return (0);
	}
	written_file = write(STDOUT_FILENO, bfr, read_file);
	if (read_file != written_file || written_file == -1)
	{
		free(bfr);
		return (0);
	}
	free(bfr);
	close(opened_file);
	return (written_file);
}
