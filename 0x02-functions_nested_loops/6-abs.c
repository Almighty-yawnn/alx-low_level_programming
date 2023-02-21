#include "main.h"

/**
 * _abs - rounds the absolute value of an integer
 * @c: The number to be checked
 * Return: Absolute value of number or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
	int x;

	x = c * -1;
	return (x);
	}
	return (c);
}
