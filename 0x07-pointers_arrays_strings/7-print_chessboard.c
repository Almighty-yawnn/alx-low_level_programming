#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard
 * @a: Array
 * Return: Always
 */

void print_chessboard(char (*a)[8])
{
	int n, i;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[i][n]);
		_putchar('\n');
	}
}
