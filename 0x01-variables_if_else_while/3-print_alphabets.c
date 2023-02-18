#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - A program that prints alphabetically in lower and uppercases.
 * Return: Always
 *
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);

	for (lower = 'A'; lower <= 'Z'; lower++)
	putchar(lower);
	putchar('\n');

	return (0);
}
