#include "main.h"

/**
 * _isupper - A function that checks uppercase characters
 * @c: The alphabet to be checked
 * Return: 1 if c is uppercase or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
