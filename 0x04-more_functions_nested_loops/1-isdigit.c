#include "main.h"

/**
 * _isdigit - A fuction that checks for digits
 * @c: The number to be checked
 * Return: 1 if c a digit or 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
