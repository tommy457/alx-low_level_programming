#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * op_add -  function that addeds 2 integers
 * @a: first intger
 * @b: second of intger
 *
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -  function that subtract 2 integers
 * @a: first intger
 * @b: second of intger
 *
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -  function that multiples 2 integers
 * @a: first intger
 * @b: second of intger
 *
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -  function that divides 2 integers
 * @a: first intger
 * @b: second of intger
 *
 * Return: a / b or 100
 */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);

	printf("Error\n");
	exit(100);
}

/**
 * op_mod - function that calculate the modulo of 2 integers
 * @a: first intger
 * @b: second of intger
 *
 * Return: a % b or 100
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);

	printf("Error\n");
	exit(100);
}
