#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 * an inputed number of bytes from src
 * @src: The sting to be appened to dest
 * @n: The number of bytes from src to be appended to dest
 * @dest: The string to be appended.
 * Return: Dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, destlen = 0;

	while (dest[index++])
		destlen++;
	for (index = 0; src[index] && index < n; index++)
		dest[destlen++] = src[index];
	return (dest);
}
