#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program prints lower alpha in reverse
 * Return: Always
 *
 */

int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
	putchar(lower);
	putchar('\n');

	return (0);
}
