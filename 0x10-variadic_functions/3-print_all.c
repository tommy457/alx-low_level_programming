#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_int - print integer
 * @args: integer
 *
 * Return: Nothing
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_char - print character
 * @args: char
 *
 * Return: Nothing
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_float - print float
 * @args: float
 *
 * Return: Nothing
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - print string
 * @args: string
 *
 * Return: Nothing
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s",  str);
}

/**
 * print_all - any given type of argument
 * @format: types of arguments passed
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int i = 0, j;
	va_list args;

	struct print_type choose_print[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*choose_print[j].str == format[i])
			{
				printf("%s", separator);
				choose_print[j].func(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
