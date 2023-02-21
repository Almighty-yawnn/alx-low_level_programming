#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be treated
 * Return: Value of the last digit
 */

int print_last_digit(int n)
{
	int ldig;

	ldig = n % 10;
	if (ldig < 0)
	{
	ldig = ldig * -1;
	}
	_putchar(ldig + '0');
	return (ldig);
}
