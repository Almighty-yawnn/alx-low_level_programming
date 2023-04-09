#include "main.h"

/**
 * get_bit - Function to return the value of a bit at a given index
 * @index: The index, strating from 0 of the bit you want to get
 * @n: the value of a bit
 * Return: The value of the bit at index or -1 if an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int y;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	y = 1UL << index;
	return ((n & y) >> index);
}
