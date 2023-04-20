#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int res;
	unsigned int i = 0;

	va_start(args, n);

	while (i < n)
	{
		res = va_arg(args, int);
		printf("%d", res);

		if (separator && i + 1 != n)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
