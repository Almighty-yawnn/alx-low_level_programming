#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @x: The character to be checked
 * Return: 1 for lowercase char or 0 for anything else
 */

int _islower(int x)
{
	if (x >= 97 && x <= 122)
	{
	return (1);
	}
	return (0);
}
