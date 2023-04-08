#include "main.h"

/**
 * binary_to_unit - Function to convert binary number to an unsigned int
 * @b: The pointer that represents a binary number
 * Return: The converted number, or 0 if b is NULL
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int l, m = 0, a;
	unsigned int p = 2;

	if (b == NULL)
	{
		return (0);
	}

	l = strlen(b);

	for (a = l - 1; a > 0; a--)
	{
		if (b[a] != '0' || b[a] != '1')
		{
			return (0);
		}

		if (b[a] == '1')
		{
			m = m + atoi(b) * p;
		}
		p = p * 2;
	}
	return (m);
}
