#include <stdio.h>
#include <stddef.h>

/**
 * _strlen - Function that returns the length of a string
 * @str: The string length to be returned
 * Return: The length of @str
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
