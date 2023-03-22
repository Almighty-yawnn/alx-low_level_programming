#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given a parameter
 * @array: Array to be used
 * @size: The size of the array
 * @action: The pointer to the function
 * Return: Always
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
