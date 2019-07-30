#include "holberton.h"

/**
 * get_hexX - print the hex value recursively
 * @n: the number to print
 * @i: a pointer to the globs
 */
void get_hexX(unsigned int n, glob *i)
{
	int temp = 0;

	if (n != 0)
	{
		temp = n % 16;

		if (temp < 10)
		{
			get_hexX(n / 16, i);
			_putchar(temp + 48, i);
		}

		else
		{
			get_hexX(n / 16, i);
			_putchar(temp + 55, i);
		}
	}
}

/**
 * X_format - print an integer in capital hexadecimal notation
 * @format: the full specifier string
 * @n: the number to print
 * @i: a pointer to the globs
 * Return: the length of the specifier string
 */
int X_format(char *format, unsigned int n, glob *i)
{
	int ret;

	ret = 0;
	if (n && format[1] == '#')
	{
		_putchar('0', i);
		_putchar('X', i);
	}
	if (format[1] == '#')
		ret++;


	if (!n)
	{
		_putchar('0', i);
		return (ret + 2);
	}
	get_hexX(n, i);

	return (ret + 2);
}
