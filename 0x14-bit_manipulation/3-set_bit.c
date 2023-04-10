#include "main.h"

/**
 * set_bit - Function to set the value of a bit to 1 at a given index
 * @n: The pointer to the value of a bit
 * @index: The index, starting from 0 the bit you want to set
 * Return: 1 if it worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= 1UL << index;
	return (1);
}
