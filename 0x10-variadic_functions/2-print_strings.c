#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @n: intger
 * @separator: string
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *x;
	unsigned int i;
	va_list args;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, char *);

			if (x == NULL)
				printf("(nil)");
			else
				printf("%s", x);

			if (i != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}

		}
		va_end(args);
		printf("\n");
	}

}
