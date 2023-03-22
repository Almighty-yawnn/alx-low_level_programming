#include "function_pointers.h"

/**
 * int_index - Function that searches an integer
 * @array: The array to be used
 * @size: The number of elements in the array
 * @cmp: The pointer to the funtion to be used to compare values
 * Return: The index of the first element, if no element return -1
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}
	return (-1);
}
