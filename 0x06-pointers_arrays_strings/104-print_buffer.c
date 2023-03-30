#include "main.h"
#include <stdio.h>
#include <ctype.h>


/**
 * print_buffer - function that prints a buffer.
 * @b: buffer pointer
 * @size: size of the buffer pointer
 */
void print_buffer(char *b, int size)
{
	int i, j;

	i = 0;

	if (size <= 0)
		printf("%c", '\n');
	else
	{
		while (i < size)
		{
			printf("%08x: ", i);
			j = 0;

			while (j < 10)
			{
				if (j % 2 == 0 && j > 0)
					printf(" ");
				if (j + i > size - 1)
					printf("  ");
				else
					printf("%.2x", b[j + i]);
				j++;
			}
			printf("%c", ' ');
			j = 0;

			while (j < 10)
			{
				if (j + i > size - 1)
					break;
				if (isprint(b[j + i]))
					printf("%c", b[j + i]);
				else
					printf("%c", '.');
				j++;
			}
			printf("%c", '\n');
			i += 10;
		}
	}
}
