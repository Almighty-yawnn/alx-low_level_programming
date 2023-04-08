#include "main.h"

/**
 * print_binary - Function to print the binary representation of a number
 * @n: The number to be printed
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int a;
	int b;
	unsigned long int y = 1;

	a = 0;
	while (a < 63)
	{
		y <<= 1;
		a++;
	}

	b = 0;
	while (b < 64)
	{
		if ((n & y) == 0)
			_putchar('0');
		else
			_putchar('1');
		y >>= 1;
		b++;
	}
}
