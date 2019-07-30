#include "holberton.h"

/**
 * hex_count - count the hex digits
 * @n: the number to count
 * Return: the count
 */
int hex_count(int n)
{
	int count = 0;

	while (n != 0)
	{
		count++;
		n /= 16;
	}

	return (count);
}

/**
 * S_format - print a string with non-visible characters escaped
 * @format: the full specifier string
 * @s: the string to print
 * @n: a pointer to the globs
 * Return: the length of the specifier string
 */
int S_format(char *format, char *s, glob *n)
{
	char *copy, temp;

	int check = 0;

	(void) format;

	copy = s;

	while (*copy)
	{
		if (*copy < 32 || *copy >= 127)
		{
			temp = *copy;
			_putchar('\\', n);
			_putchar('x', n);
			check = hex_count(temp);
			if (check == 1)
				_putchar('0', n);
			X_format("%X", temp, n);
		}
		else
			_putchar(*copy, n);
		copy++;
	}
	return (2);
}
