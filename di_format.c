#include "holberton.h"
/**
 * di_format - prints int
 * @format: format specifier
 * @n: input int
 * @q: a pointer to the print counter
 * Return: length of format specifier
 */
int di_format(char *format, long int n, int *q)
{
	int count = 1, divide = 1, temp;

	unsigned long i;

	(void) format;

	if (n < 0)
	{
		i = n * -1;
		_putchar('-', q);
	}
	else
		i = n;

	while (divide <= i / 10)
	{
		count++;
		divide *= 10;
	}

	while (count > 0)
	{
		_putchar((i / divide) + '0', q);
		i %= divide;
		divide /= 10;
		count--;
	}
	return (2);
}
