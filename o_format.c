#include "holberton.h"
/**
 * get_oct - get the octal number recursively
 * @n: the number to get
 * @i: a pointer to the globs
 */
void get_oct(unsigned int n, glob *i)
{
	int temp = 0;

	if (n != 0)
	{
		temp = n % 8;
		get_oct(n / 8, i);
		_putchar(temp + 48, i);
	}
}

/**
 * o_format - print an int like an octal number
 * @format: the full specifier string
 * @n: the number to print
 * @i: a pointer to the globs
 * Return: the length of the specifier
 */
int o_format(char *format, unsigned int n, glob *i)
{
	(void) format;

	if (!n)
	{
		_putchar('0', i);
		return (2);
	}
	get_oct(n, i);

	return (2);
}
