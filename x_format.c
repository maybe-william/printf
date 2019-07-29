#include "holberton.h"

/**
 * get_hexx - print the hex number recursively
 * @n: the number to print
 * @q: a pointer to the globs
 *
 */
void get_hexx(unsigned long int n, glob *q)
{
	int temp = 0;

	if (n != 0)
	{
		temp = n % 16;

		if (temp < 10)
		{
			get_hexx(n / 16, q);
			_putchar(temp + 48, q);
		}
		else
		{
			get_hexx(n / 16, q);
			_putchar(temp + 87, q);
		}
	}
}


/**
 * x_format - print a hex number
 * @format: the full specifier string
 * @n: the number to print
 * @q: a pointer to the globs
 * Return: the length of the specifier string
 */
int x_format(char *format, unsigned long int n, glob *q)
{
	(void) format;

	if (!n)
	{
		_putchar('0', q);
		return (2);
	}
	get_hexx(n, q);

	return (2);
}
