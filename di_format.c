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
	int count = 1, divide = 1, spec = 1;

	unsigned long i;

	(void) format;

	if (*(format+1) == 'h')
	{
		n = (short int) n;
	}
	if (*(format+1) != 'l')
	{
		n = (int) n;
	}
	if (n < 0)
	{
		i = n * -1;
		_putchar('-', q);
	}
	else
		i = n;


	while (*format != 'd' && *format != 'i')
	{
		spec++;
		format++;
	}

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
	return (spec);
}
