#include "variadic_functions.h"

/**
  * sum_them_all - res of all its parameters
  * @n: integer
  *
  * Return: 0 If n == 0
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int res = 0;
	unsigned int i = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (i < n)
		{
			res += va_arg(args, int);
			i++;
		}
		va_end(args);
		return (res);
	}
	return (0);
}
