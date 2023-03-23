#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * op_add - Function that returns the sum of a and b
 * @a: Integer to be used
 * @b: Integer to be used
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that returns the difference of a and b
 * @a: Integer to be used
 * @b: Integer to be used
 * Return: The difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Funtion that returns the product of a and b
 * @a: Integer to be used
 * @b: Integer to be used
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that returns the result of the division of a by b
 * @a: Integer to be used
 * @b: Integer to be used
 * Return: The result of the division of a by b
 */


int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Funtion that returns the remainder of the division a by b
 * @a: Integer to be used
 * @b: Integer to be used
 * Return: The remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
