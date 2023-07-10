#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file -appends text at the end of a file..
 * @filename: filename to append to.
 * @text_content: is a NULL terminated string to append to the file.
 *
 * Return: 1 or -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t file_open, file_write;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_open = open(filename, O_WRONLY | O_APPEND);
	file_write = write(file_open, text_content, len);

	if (file_open == -1 || file_write == -1)
	{
		return (-1);
	}
	close(file_open);

	return (1);
}

