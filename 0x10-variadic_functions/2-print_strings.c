#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator:  is the string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *res;
	unsigned int i = 0;

	va_start(args, n);

	while (i < n)
	{
		res = va_arg(args, char *);

		if (!args)
		{
			printf("nil");
		}
		else
		{
			printf("%s", res);
		}

		if (separator && i + 1 != n)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
