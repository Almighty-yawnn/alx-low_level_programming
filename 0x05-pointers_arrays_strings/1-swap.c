#include "main.h"

/**
 * swap_int - Function to swap the values of two integers
 * @a: One of the integers to be swapped
 * @b: One of the integers to be swapped
 * Return: Always
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
