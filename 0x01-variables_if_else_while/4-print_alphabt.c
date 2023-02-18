#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - A program that prints alphabet in lowercase
 * Return: Always
 */

int main(void)
{
	char lower, e, q;

	e = 'e';
	q = 'q';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
	if (lower != e && lower != q)
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
