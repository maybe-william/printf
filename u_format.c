#include "holberton.h"
/**
  * u_format - prints unsigned int
  * @format: format specifier
  * @n: input unsigned int
  * @q: a pointer to the globs
  * Return: length of format specifier
  */
int u_format(char *format, unsigned long int n, glob *q)
{
	unsigned int count = 1, divide = 1, spec = 1;

	while (*format != 'u')
	{
		spec++;
		format++;
	}
	while (divide <= n / 10)
	{
		count++;
		divide *= 10;
	}

	while (count > 0)
	{
		_putchar((n / divide) + '0', q);
		n %= divide;
		divide /= 10;
		count--;
	}
	return (spec);
}
