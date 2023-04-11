#include "main.h"

/**
 * flip_bits - Function to return the number of bits when flipped
 * @n: The bits to be flipped
 * @m: The bits to flipped
 * Return: The result
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a;
	unsigned long int b;

	a = 0;
	b = n ^ m;

	while (b != 0)
	{
		if (b & 1)
		{
			a++;
		}
		b >>= 1;
	}
	return (a);
}
