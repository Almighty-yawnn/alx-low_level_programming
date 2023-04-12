#include "main.h"

/**
 * get_endianness - Function to check the endianness
 * Return: 0 if big endian, 1 if lettle endian
 */

int get_endianness(void)
{
	char *l;
	unsigned int a;

	a = 1;
	l = (char *)&a;
	return (*l == 1);
}
