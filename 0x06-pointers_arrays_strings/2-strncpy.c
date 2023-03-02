#include "main.h"

/**
 * _strncpy - Function that copies at most an inputed number
 * @n: The maximum number of bytes to be copied from src
 * @dest: The buffer storing the string copy
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, srclen = 0;

	while (src[index++])
		srclen++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = srclen; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
