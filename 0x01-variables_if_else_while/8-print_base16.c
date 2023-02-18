#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints numbers of base sixteen
 * Return: Always
 *
 */

int main(void)
{
	int x;
	char lower;

	for (x = '0'; x <= '9'; x++)
	putchar(x);

	for (lower = 'a'; lower <= 'f'; lower++)
	putchar(lower);
	putchar('\n');

	return (0);
}
