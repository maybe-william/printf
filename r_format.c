#include "holberton.h"
/**
 * print_rev - prints string in reverse
 * @s: input string
 * @n: a pointer to the globs
 */
void print_rev(char *s, glob *n)
{
	if (*s)
	{
		print_rev(s + 1, n);
		_putchar(*s, n);
	}
}
/**
 * r_format - sends string to print_rev
 * @format: format specifier
 * @s: input string
 * @n: a pointer to the globs
 * Return: format specifier length
 */
int r_format(char *format, char *s, glob *n)
{
	(void) format;

	print_rev(s, n);

	return (2);
}
