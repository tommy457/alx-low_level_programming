#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file.
 * @filename: filename to be created.
 * @text_content: is a NULL terminated string to write to the file.
 *
 * Return: 0 , 1 or -1.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t file_open;
	int len;

	if (filename == NULL)
		return (0);

	file_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file_open == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		write(file_open, text_content, len);
	}

	if (close(file_open) == -1)
		return (-1);

	return (1);
}
