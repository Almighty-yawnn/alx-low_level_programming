#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters
 * @n: Integer to be used
 * @sum: The sum of all parameters
 * Return: The sum
 */


int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    int sum = 0;

    /* Initialize variable argument list */
    va_start(args, n);

    /* Loop through each argument, adding to sum */
    for (unsigned int i = 0; i < n; i++) {
        sum += va_arg(args, int);
    }

    /* Clean up variable argument list */
    va_end(args);

    return sum;
}
