#include "main.h"

/**
 * print_binary - Function to print the binary representation of a number
 * @n: The number to be printed
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int b = 0;
	unsigned long int y = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (y > 0)
	{
		if (n & y)
		{
			b = 1;
			_putchar('1');
		}
		else
			if (b)
			{
				_putchar('0');
			}
		y >>= 1;
	}
	if (!b)
	{
		_putchar('0');
	}

}
