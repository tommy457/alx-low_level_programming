#include<stdio.h>
#include<stdlib.h>
/**
 * main- program prints opcodes in hexa
 *
 *@argc: array of arguments.
 *@argv: size of array.
 *
 *Return: 0 ,1 or 2
 */
int main(int argc, char *argv[])
{
	char *p = (char *)main;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i-- > 1)
		printf("%02hhx ", *p++);

	printf("%02hhx\n", *p++);

	return (0);
}
