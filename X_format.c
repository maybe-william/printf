#include "holberton.h"

/**
 * get_hexX - print the hex value recursively
 * @n: the number to print
 * @i: a pointer to the print counter
 */
void get_hexX(unsigned int n, int *i)
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
int X_format(char *format, unsigned int n, int *i)
{
	get_hexX(n, i);

	return (2);
}
