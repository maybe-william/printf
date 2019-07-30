#include "holberton.h"

/**
 * get_hexX - print the hex value recursively
 * @n: the number to print
 * @i: a pointer to the print counter
 */
void get_hexX(unsigned long int n, int *i)
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
 * @i: a pointer to the print counter
 * Return: the length of the specifier string
 */
int X_format(char *format, unsigned long int n, int *i)
{
	int count = 1;

	(void) format;

	while (*format != 'X')
	{
		count++;
		format++;
	}

	if (!n)
	{
		_putchar('0', i);
		return (2);
	}
	get_hexX(n, i);

	return (count);
}
