#include <stdio.h>
/**
 * main - A c program that prints the size of various types
 * Return: 0 (success)
 */
int main(void)
{
char x;
int y;
long int z;
long long int a;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
