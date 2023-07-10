#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it.
 * @filename: filename to be read and print.
 * @letters: number of letters it should read and print.
 *
 * Return: actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_open, file_read, file_write;
	char *fd;

	if (filename == NULL)
		return (0);

	fd = malloc(sizeof(char) * letters);

	if (fd == NULL)
		return (0);

	file_open = open(filename, O_RDONLY);
	file_read = read(file_open, fd, letters);
	file_write = write(STDOUT_FILENO, fd, file_read);

	if (file_open == -1 || file_read == -1 ||
		file_write == -1 || file_write != file_read)
	{
		free(fd);
		return (0);
	}

	free(fd);
	close(file_open);

	return (file_write);
}

