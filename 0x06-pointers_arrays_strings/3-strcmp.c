#include "main.h"

/**
 * _strcmp - Function that compares pointer ]s to two strings
 * @s1: A pointer to the first string to be compard
 * @s2: A pointer to the second string to be compared
 * Return: Always
 * if str1 == str2, 0
 * if str1 > str2, the posiistive difference of the first unmatched charaters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
