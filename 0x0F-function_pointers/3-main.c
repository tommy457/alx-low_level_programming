#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * main - function that calculate 2 arguments
 * @argv: array of arguments
 * @argc: size of the array
 *
 * Return: 98, 99, 0 or sum of args
 */

int main(int argc, char **argv)
{
	int (*calc)(int, int);
	int a =  atoi(argv[1]);
	int b =  atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	calc = get_op_func(argv[2]);


	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", calc(a, b));
	return (0);
}
