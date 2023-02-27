#include "main.h"

/**
 * print_rev - Function that prints a string in reverse order
 * @s: The string to print
 * Return: always
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	for (x -= 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
