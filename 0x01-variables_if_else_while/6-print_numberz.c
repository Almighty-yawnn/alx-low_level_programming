#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - A program that prints single digits
 * Return: Always
 *
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	putchar(x);
	putchar('\n');

	return (0);
}
