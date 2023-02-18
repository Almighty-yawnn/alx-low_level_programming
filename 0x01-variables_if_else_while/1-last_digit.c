#include <stdio.h>

#include <time.h>

#include <stdio.h>



/**
 * main - A program that prints a text according to a number
 * Return: Always
 *
 */

int main(void)
{
	int a, num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = a % 10;

	if (num > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", a, num);
	}
	else if (num == 0)
	{
		printf("last digit of %d is %d and is 0\n", a, num);
	}
	else if (num < 6 && num != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", a, num);
	}
	return (0);
}
