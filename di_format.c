#include "holberton.h"
/**
 * di_format - prints int
 * @format: format specifier
 * @n: input int
 * @q: a pointer to the globs
 * Return: length of format specifier
 */
int di_format(char *format, long int n, glob *q)
{
	unsigned int count = 1, spec = 1, divide = 1;

	unsigned long i;

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
	{
		i = n;
		if (format[1] == '+' || format[1] == ' ')
		{
			_putchar(format[1], q);
		}
	}

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
