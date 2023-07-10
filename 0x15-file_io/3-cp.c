#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>

void close_file(int fd);
char *create_buff(char *file);

/**
 * main - copies the content of a file to another file.
 * @argv: array of arguments.
 * @argc: lenght of array.
 *
 * Return: 0 on success 97, 98 99 or 100 on failure.
 */
int main(int argc, char *argv[])
{
	int file_from_open, file_from_read, file_to_open, file_to_write;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buff(argv[2]);
	file_from_open = open(argv[1], O_RDONLY);
	file_from_read = read(file_from_open, buff, 1024);
	file_to_open = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from_open == -1 || file_from_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		file_to_write = write(file_to_open, buff, file_from_read);

		if (file_to_open == -1 || file_to_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		file_from_read = read(file_from_open, buff, 1024);
		file_to_open = open(argv[2], O_WRONLY | O_APPEND);
	} while (file_from_read > 0);
	free(buff);
	close_file(file_from_open);
	close_file(file_to_open);
	return (0);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 *
 * Return: NA
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * create_buff - creates a  1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return:pointer to the new buffer.
 */
char *create_buff(char *file)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
