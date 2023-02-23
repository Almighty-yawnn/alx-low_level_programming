#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_numbers - Function to print numbers 0 to 9
 * Return: The numbers 0 up to 9
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
	putchar(c + '0');
	}
	putchar('\n');
}
