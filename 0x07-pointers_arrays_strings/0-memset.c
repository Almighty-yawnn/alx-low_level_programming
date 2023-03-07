#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte.
 * @s: point destination
 * @b: constant byte
 * @n: bytes
 * Return: Always
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
