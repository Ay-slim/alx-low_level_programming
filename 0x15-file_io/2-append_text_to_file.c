#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - Creates a file
 * @filename: Filename to append to
 * @text_content: Content to append
 * Return: 1 if success or -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t opened_file;
	ssize_t written_file;
	unsigned int len;

	if (!filename)
		return (-1);

	if (text_content == NULL)
	{
		len = 0;
	}
	else
	{
		len = strlen(text_content);
	}
	opened_file = open(filename, O_WRONLY | O_APPEND);
	if (opened_file == -1)
		return (-1);
	written_file = write(opened_file, text_content, len);
	if (written_file == -1)
		return (-1);
	close(opened_file);
	return (1);
}
