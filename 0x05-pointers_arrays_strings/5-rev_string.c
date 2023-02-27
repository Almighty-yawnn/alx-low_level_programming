#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: The string to be reversed
 * Return: Always
 */

void rev_string(char *s)
{
	int x = 0, z = 0;
	char y;

	while (s[z++])
		x++;
	for (z = x - 1; z >= x / 2; z--)
	{
		y = s[z];
		s[z] = s[x - z - 1];
		s[x - z - 1] = y;
	}
}
