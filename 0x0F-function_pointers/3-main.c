#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - performs simple operations.
  * @argc: arguments count.
  * @argv: tring pointer array to the arguments.
  *
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	int (*fxn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	fxn = get_op_func(argv[2]);

	if (!fxn)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", fxn(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
