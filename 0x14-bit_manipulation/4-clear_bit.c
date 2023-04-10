#include "main.h"

/**
 * clear_bit - Function to sets the value of a bit to 0 at a given index
 * @n: The pointer
 * @index: The index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, -1 if error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
